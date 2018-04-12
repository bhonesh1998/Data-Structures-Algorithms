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
#include<stdio.h>
#include<limits.h>
int max(int a, int b) { return (a > b)? a : b;}
int cutRod(int price[], int n)
{
   if (n <= 0)
     return 0;
   int max_val = INT_MIN;
   for (int i = 0; i<n; i++)
         max_val = max(max_val, price[i] + cutRod(price, n-i-1));
 
   return max_val;
}
int main()
{

	pf("enter size of array \n ");
	sf("%d",&n);
	int a[n];
	pf("enter elements \n ");
	for(i=0;i<n;i++)
		sf("%d",&a[i]);	
    printf("Maximum Obtainable Value is %dn", cutRod(a,n));
    getchar();
    return 0;
}
