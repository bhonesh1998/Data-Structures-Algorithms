#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define MAX 1000001
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void ans(z n)
{
    if(n==0) return;
    ans(n/2);
    cout <<n%2;
}

int main()     
{
    z n;
    cin>>n;
    ans(n);
}
