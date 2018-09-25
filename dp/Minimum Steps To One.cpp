/*
Problem : Minimum Steps To One
Problem Statement:
On a positive integer,
you can perform any one of the following 3 steps.
1.) Subtract 1 from it. ( n = n - 1 )  , 
2.) If its divisible by 2, divide by 2. ( if n % 2 == 0 , then n = n / 2  )  ,
3.) If its divisible by 3, divide by 3. ( if n % 3 == 0 , then n = n / 3  ).
Now the question is, given a positive integer n, find the minimum number of steps that takes n to 1

eg: 1.)For n = 1 , output: 0     
2.) For n = 4 , output: 2  ( 4  /2 = 2  /2 = 1 )  
3.)  For n = 7 , output: 3  (  7  -1 = 6   /3 = 2   /2 = 1 )
*/
 
#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define siz 1000001
#define MAXN 100001
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
z i,j;
z memo[siz]={-1};
z solve(z n)
{
    if(n==1) return 0;
    if(memo[n]!=-1) return memo[n];
    z r = 1+solve(n-1);
    if(n%2==0) r = min(r,1+solve(n/2));
     if(n%3==0) r = min(r,1+solve(n/3));
     memo[n]=r;
     return r;
}

int main() 
{

    for(i=0;i<siz;i++)
        memo[i]=-1;
    cout << solve(10);

    //cout << memo[1];
}
