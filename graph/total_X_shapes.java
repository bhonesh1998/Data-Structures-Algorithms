import java.io.*;
import java.util.*;
class GFG 
{
    
    public static void fun(boolean visited[][],char ar[][],int i,int j , int n , int m)
{
    if(ar[i][j]=='X'&&!visited[i][j])
    {
        visited[i][j]=true;
        if(i+1<n) fun(visited,ar,i+1,j,n,m);
        if(i-1>=0) fun(visited,ar,i-1,j,n,m);
         if(j+1<m) fun(visited,ar,i,j+1,n,m);
          if(j-1>=0) fun(visited,ar,i,j-1,n,m);
        
    }
    else return;
    
}
	public static void main (String[] args) 
	{
	        Scanner sc = new Scanner(System.in);
	        int t=sc.nextInt();
	        while(t-->0)
	        {
	        
	        int n,m;
            int i,j;
            n=sc.nextInt();
            m=sc.nextInt();
            char ar[][]=new char[n][m];
            boolean visited[][]=new boolean[n][m];
            for(i=0;i<n;i++)
            for(j=0;j<m;j++)
            visited[i][j]=false;
            
            for(i=0;i<n;i++)
            {
                String temp=sc.next();
                for(j=0;j<m;j++)
                {
                    ar[i][j]=temp.charAt(j);
                }
            }
            
            
            int c=0;
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    
                        if(ar[i][j]=='X' && !visited[i][j])
                        {
                            fun(visited,ar,i,j,n,m);
                            c++;
                        }
                    
                    }
                }
    
	    System.out.println(c);
	        }
	}
}
