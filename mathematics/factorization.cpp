#include<bits/stdc++.h> 
using namespace std; 
#define z long long int
#define n 1000000
vector<z> mip(n+1);
void fact()
{
    z i,j;
    mip[1]=1;
    for(i=2;i<=n;i++)
        mip[i]=i;
    for(i=2;i<=n;i+=2)
        mip[i]=2;
    for(i=3;i*i<=n;i++)
    {
        if(mip[i]==i) 
        {
            for(j=i*i;j<=n;j+=i)
            {
                if(mip[j]==j)
                    mip[j]=i;
            }
        }
    }   
}
void sol(z x)
{
    while(x!=1)
    {
        cout<<mip[x]<<" "; // printing prime factors of given number 
        x/=mip[x];
    }
}
int main() 
{ 
    fact();
    sol(100);
} 
