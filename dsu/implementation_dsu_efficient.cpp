#include<bits/stdc++.h>
using namespace std;
#define z long long int
#define mod 1000000007
#define db double

z roota(z a[],z i)
{
    while(a[i]!=i)
    {
        a[i]=a[a[i]];
        i=a[i];
    }
    return i;
}
z uniona(z a[],z siz[],z x,z y)
{
    z roota_x=roota(a,x);
    z roota_y=roota(a,y);
    if(siz[roota_x]<siz[roota_y])
    {
        a[roota_x]=a[roota_y];
        siz[roota_y]+=siz[roota_x];
    }
    else
    {
        a[roota_y]=a[roota_x];
        siz[roota_x]+=siz[roota_y];
    }

}
bool find(z a[],z x , z y)
{
        if(roota(a,x)==roota(a,y)) return true; else return false;
}
int main()
{
    z n=10,i;
    z a[n+1];
    z siz[n+1];
    for(i=1;i<=n;i++)
    {
        a[i]=i;
        siz[i]=1;
    }
    uniona(a,siz,1,2); // it will make set = {1,2}          (1)-----2 
    uniona(a,siz,3,4); // it will make set = {3,4}          (3)-----4

    cout<<find(a,1,2)<<endl; // it will return 1 bcoz 1 and 2 are connected
    cout<<find(a,1,3)<<endl; // it will return 0 bcoz 1 and 3 are not connected

    uniona(a,siz,2,3); // it will combine 2 and 3 and make a large set = {1,2,3,4}

    // now final situation is like  
    //            (1)-------2
    //               \     
     //               \
      //               \
      //                3-------4
    cout<<find(a,1,3)<<endl; // it will return 1 bcoz now 1 and 3 are connected 

    for(i=1;i<=4;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    // it will print 1 1 1 3 bcoz 1 is parent for 1,2,3 but 3 is parent for 4 
    // for 4 root is 1 but parent is 3 
    cout<<roota(a,4)<<endl;

    return 0;
}
