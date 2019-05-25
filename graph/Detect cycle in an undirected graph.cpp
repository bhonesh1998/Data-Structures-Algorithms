bool fun(int i,vector<int> adj[],bool vis[],int par)
{   vis[i]=true;
    
    for(auto p=adj[i].begin();p!=adj[i].end();p++)
    {
        if(!vis[*p]){
        if(fun(*p,adj,vis,i))
        return true;}
        else if(*p!=par)
        {
            return true;
        }
    }
    
    return false;
}
bool isCyclic(vector<int> adj[], int V)
{
    int i;
    bool *vis=new bool[V];
    for(i=0;i<V;i++) 
        vis[i]=false;
    for(i=0;i<V;i++)
    {
        if(!vis[i])
        if(fun(i,adj,vis,-1))
            return true;
    }
    return false;
}
