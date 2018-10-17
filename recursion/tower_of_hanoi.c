#include <stdio.h> 
#define pf printf
#define sf scanf
 
// C recursive function to solve tower of hanoi puzzle 

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
{ 
    if (n == 1) 
    { 
        pf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod); 
        return; 
    } 
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod); 
    pf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod); 
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod); 
} 
  
int main() 
{ 
    int n; // Number of disks
    sf("%d",&n);
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods 
    return 0; 
} 
