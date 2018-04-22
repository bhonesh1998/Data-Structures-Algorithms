/*
***********************************************************
***********************************************************
NAME-BHONESH CHAWLA
REGNO-20164017
BATCH-CS-1
CONTACT-+918619127663
EMAIL-rajachawla778@gmail.com
***********************************************************
***********************************************************
*/

// implementation of depth first search using adjacency matrix 

#include <bits/stdc++.h>
#define sf scanf
#define pf printf
#define z long long int
using namespace std;
 int g[100][100];
 bool state[100]={false};
 int v;
//-------------------------------------------------------------------------------------------------
void sol(int ver)
{
   stack<int> st;
   st.push(ver);
    while(!st.empty())
    {
        int s=st.top();
        st.pop();

        if(!state[s])
          {
            state[s]=true;
            pf("%d ",s);
          }

          for(int i=0;i<v;i++)
          {
              if(   (g[s][i]==1) && (state[i]==false) )
                st.push(i);
          }
    }
}
//-------------------------------------------------------------------------------------------------

int main()
{ 
  int i,j,p;
  pf("enter number of vertices \n");
  sf("%d",&v);
  for(i=0;i<v;i++)
    {
            for(j=0;j<v;j++)
                  g[i][j]=0;
    }
  
  int noe = (v*(v-1) )/2;
  int a,b;
  for(i=0;i<noe;i++)
  {
        pf("enter 2 vertices for an edge\n (-1 -1 to break) ");
        sf("%d %d",&a,&b);
        if(a==-1 && b==-1)
        break;
        g[a][b]=1;
        g[b][a]=1;
    
  }
  
    pf("graph is \n");
    for(i=0;i<v;i++)
    {
            for(j=0;j<v;j++)
            {
                    pf("%d ",g[i][j]);
            }
            pf("\n");
    }
   
  

    pf("after dfs nodes are :- \n");

    for(i=0;i<v;i++)
    {
        if(state[i]==false)
        {
          sol(i);
        }
    }
   

    
  return 0;
} 
//-------------------------------------------------------------------------------------------------
