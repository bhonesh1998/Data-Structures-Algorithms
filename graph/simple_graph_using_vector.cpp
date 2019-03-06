#include<bits/stdc++.h>
using namespace std;

void addEdge(vector <int> ve[],int u,int v)
{
        ve[u].push_back(v);
        ve[v].push_back(u);
}

void pr(vector<int> ve[],int V)
{
    for(int i=0;i<V;i++)
    {
        cout<<"list of vertex";
        cout << i <<" head ->";
        for(auto x:ve[i])
        {
            cout << x << "->";
        }
        cout<<"\n";
    }
}


int main()
{
    
    int V=5;
    vector<int> ad[V];
    addEdge(ad,1,2);
    addEdge(ad,1,3);
    addEdge(ad,1,4);
    addEdge(ad,2,3);
    addEdge(ad,2,4);
    pr(ad,V);
    
}
