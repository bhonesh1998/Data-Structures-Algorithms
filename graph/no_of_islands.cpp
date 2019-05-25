int f(int x,int y,int N,int M)
{
    if(x<N && x>=0 && y<M && y>=0 )
    return 1;
    else
    return 0;
}
void dfs(vector<int> A[],int N,int M,int i,int j,vector<bool> vis[])
{
        
        
            vis[i][j]=true;
            if(f(i+1,j+1,N,M)==1 && A[i+1][j+1] && !vis[i+1][j+1])
            dfs(A,N,M,i+1,j+1,vis);
            if(f(i+1,j,N,M)==1 && A[i+1][j] && !vis[i+1][j])
            dfs(A,N,M,i+1,j,vis);
            if(f(i+1,j-1,N,M)==1 && A[i+1][j-1] && !vis[i+1][j-1])
            dfs(A,N,M,i+1,j-1,vis);
            if(f(i-1,j,N,M)==1 && A[i-1][j] && !vis[i-1][j])
            dfs(A,N,M,i-1,j,vis);
            if(f(i-1,j-1,N,M)==1 && A[i-1][j-1] && !vis[i-1][j-1])
            dfs(A,N,M,i-1,j-1,vis);
            if(f(i-1,j+1,N,M)==1 && A[i-1][j+1] && !vis[i-1][j+1])
            dfs(A,N,M,i-1,j+1,vis);
            if(f(i,j+1,N,M)==1 && A[i][j+1] && !vis[i][j+1])
            dfs(A,N,M,i,j+1,vis);
            if(f(i,j-1,N,M)==1 && A[i][j-1] && !vis[i][j-1])
            dfs(A,N,M,i,j-1,vis);
}

int findIslands(vector<int> A[], int N, int M)
{
    int c=0,i,j;
    vector<bool> vis[N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        vis[i].push_back(false);
    }

    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            if( A[i][j]==1 && !vis[i][j])
            { 
              dfs(A,N,M,i,j,vis);
              c++;  
            }               
        }
    }
    return c;
}
