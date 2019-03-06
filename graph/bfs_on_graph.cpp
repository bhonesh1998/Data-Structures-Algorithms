#include<bits/stdc++.h>
using namespace std;

void add(vector<int> ve[],int s ,int d)
{
    ve[s].push_back(d);
    ve[d].push_back(s);
}
void bfs(vector<int> ve[],int v,int start)
{
    bool visited[v]={false};
    
    int s=start;
    vector<int> :: iterator it ;
    queue<int> q;
    q.push(s);
    visited[s]=true;
    
    while(!q.empty())
    {
        s=q.front();
        cout<<q.front()<<endl;
        q.pop();
        
        for(it=ve[s].begin();it!=ve[s].end();it++)
        {
           if(visited[*it]==false)
           {
               q.push(*it);
               visited[*it]=true;
           }
        }
        
    }
    
}
int main()
{
    int v=5;
    vector<int> g[v];
    add(g,0, 1); 
    add(g,0, 2); 
    add(g,1, 2); 
    add(g,2, 0); 
    add(g,2, 3); 
    add(g,3, 3); 
    int start=0;
    bfs(g,v,start);
}
