#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define MAX 1000001
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

z ans(z n)
{
    if(n==1) return 0;
    else return 1+ans(n/2);
}

int main()     
{
    z n;
    cin>>n;
    cout << ans(n);
}
