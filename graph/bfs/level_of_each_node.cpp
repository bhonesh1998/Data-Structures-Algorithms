#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define MAX 1000001
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);


void bfs(vector<z> v[],z si,z s,z lev[])
{
    z i;
    bool vis[si];
    memset(vis,false,si);

    queue<z> q;
    q.push(s);

    lev[s]=0;
    
    vis[s]=true;


    while(!q.empty())
        {
            z x = q.front();
            cout << x << endl;
            cout << lev[x] << endl;
            q.pop();
            for(i=0;i<v[x].size();i++)
            {
                if(!vis[v[x][i]])
                {
                    q.push(v[x][i]);
                    vis[v[x][i]]=true;
                    lev[v[x][i]]=lev[x]+1;
                }  
            }   
        }


}

int main()     
{
    z n;
    cin>>n;
    vector<z> v[n];
    z lev[n]={0};
    
    while(1)
    {
        pf("enter edges (stop -1 -1)");
        z x,y;
        cin>>x>>y;
        if(x==-1 && y==-1) break;
        v[x].push_back(y);
        v[y].push_back(x);
    } 

    bfs(v,n,0,lev);


}
