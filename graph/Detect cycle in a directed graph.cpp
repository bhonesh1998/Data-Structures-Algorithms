bool fun(int i,vector<int> adj[],bool vis[],bool rec[])
{   if(vis[i]==false)
    {
        vis[i]=true;
        rec[i]=true;
        for(auto p=adj[i].begin();p!=adj[i].end();++p)
        {
            if(!vis[*p] && fun(*p,adj,vis,rec))
                return true;
            else if(rec[*p]==true)
            return true;
        }
    }
    rec[i]=false;
    return false;
}
bool isCyclic(int V,vector<int> adj[])
{
    int i;
    bool *vis=new bool[V];
    bool *rec=new bool[V];
    for(i=0;i<V;i++) 
        vis[i]=rec[i]=false;
    for(i=0;i<V;i++)
    {
        if(fun(i,adj,vis,rec))
            return true;
    }
    return false;
}
