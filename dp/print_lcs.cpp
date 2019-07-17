#include <bits/stdc++.h>
using namespace std;
#define z long long int

void lcs(string x,string y,z m,z n)
{
    // apply dp
    z i,j;
    z dp[m+1][n+1];
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0||j==0)
            dp[i][j]=0;
            else if(x[i-1]==y[j-1]) // bcoz of 0 indexing 
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    // print lcs
    z ind=dp[m][n];
    char s[ind+1];
    s[ind]='\0'; // null termination
    i=m;j=n;
    while(i>0 && j>0)
    {
        if(x[i-1]==y[j-1]) // if same then include 
        {
            s[ind-1]=x[i-1];
            i--;j--;ind--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) // not same , go in the direction of max
        i--;
        else
        j--;
    }
    
    cout<<s<<endl;
}

int main() 
{
  		
  	string x,y;
  	cin>>x>>y;
  	z m=x.length();
  	z n=y.length();
  	lcs(x,y,m,n);
	


		return 0;
}
