#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define MAX 1000001
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

z ans(z a[],z n)
{
        if(n==1) return a[0];
        else return max(a[n-1],ans(a,n-1));
}


int main()     
{
    z n,i;
    cin>>n;
    z a[n];
    for(i=0;i<n;i++) cin>>a[i];
    cout << ans(a,n) <<endl;
}
