

#include<stdio.h> 
  
 int mc(int n) 
 { 
   if (n > 100) 
     return n - 10; 
   return mc(mc(n+11)); 
 } 
  
int main() 
{ 
  printf(" %d ", mc(99)); 
  return 0; 
}
