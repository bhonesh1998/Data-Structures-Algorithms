#include<bits/stdc++.h>
using namespace std;
#define z long long int 

int main()
{
    z n,e,i,j;
    cin>>n>>e;
    vector<int> v[n];
    while(e--)
    {
        z x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(i=0;i<n;i++)
    {
        z pp=v[i].size();
        for(j=0;j<pp;j++)
        cout<<v[i][j]<<" ";
        cout<<endl;
    }
}
