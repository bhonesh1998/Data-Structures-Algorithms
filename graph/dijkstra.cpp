#include<bits/stdc++.h>
using namespace std;
#define z long long int 
#define pa pair<z,z>

void addEdge(vector<pair<z,z>> adj[],z u , z v , z wt)
{
    adj[u].push_back(make_pair(v,wt));
    adj[v].push_back(make_pair(u,wt));
}

void fun(vector<pair<z,z>> adj[],z V,z src)
{
    z dis[V],i;
    for(i=0;i<V;i++)
    dis[i]=INT_MAX;
    dis[src]=0;
    priority_queue<pa,vector<pa>,greater<pa>> pq; //for min heap
    pq.push(make_pair(0,src));
    while(!pq.empty())
    {
        z u=pq.top().second;
        //z exdis=pq.top().first;
        pq.pop();
        for(x : adj[u])
        {
            z v=x.first;
            z weight=x.second;
            if(dis[v]>dis[u]+weight)
            {
                dis[v]=dis[u]+weight;
                pq.push(make_pair(dis[v],v));
            }
        }
    }
    
    for(i=0;i<V;i++)
    cout<<dis[i]<<endl;
    
}

int main() 
{
    
    z V = 9; 
    vector<pa> adj[V]; 
    addEdge(adj, 0, 1, 4); 
    addEdge(adj, 0, 7, 8); 
    addEdge(adj, 1, 2, 8); 
    addEdge(adj, 1, 7, 11); 
    addEdge(adj, 2, 3, 7); 
    addEdge(adj, 2, 8, 2); 
    addEdge(adj, 2, 5, 4); 
    addEdge(adj, 3, 4, 9); 
    addEdge(adj, 3, 5, 14); 
    addEdge(adj, 4, 5, 10); 
    addEdge(adj, 5, 6, 2); 
    addEdge(adj, 6, 7, 1); 
    addEdge(adj, 6, 8, 6); 
    addEdge(adj, 7, 8, 7); 
  
    fun(adj, V, 0);
    
	return 0;
}
