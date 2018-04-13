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
#include<stdlib.h>
#define pf printf
#define sf scanf
#define max 100

int stack[max];
int top=-1;
//---------------------------------------------------------------------------------------------------------------------
void push(int x){
    if(top==max-1){
    pf("Stack overflow\n");
    return;}
    else if(top==-1){
         top=0;
         stack[top]=x;}
     else
        { top++;
          stack[top]=x;
          }
     pf("New stack is :  ");
   for(int i=0;i<=top;i++)       
          pf("%d  ",stack[i]);
          pf("\n");
   
          }

//---------------------------------------------------------------------------------------------------------------------


int pop(){
    if(top==-1){
    pf("Stack is underflow\n");
    return 0;
    }
    else{
     int item=stack[top];
     top--;
     
     return item;}
     }
//---------------------------------------------------------------------------------------------------------------------

int middle(){
   int middle=(top+1)/2;
   int item=stack[middle];
   return item;
   }
//---------------------------------------------------------------------------------------------------------------------

void deletemiddle(){
     int middle=(top+1)/2;
     for(int i=middle;i<top;i++){
     int tem=stack[i];
      stack[i]=stack[i+1];
      stack[i+1]=tem;
      }
     
      pf("New stack is :  ");
      for(int i=0;i<top;i++)
      pf("%d ",stack[i]);
      pf("\n");
      }
//---------------------------------------------------------------------------------------------------------------------

int main(){
   int a,item;
   while(1){
   pf("1. Push element in stack\n2. Pop element from stack\n3. find middle of stack\n4.Delete middle element of stack\n5.exit from loop\nPlz eneter ur choice\n");
    sf("%d",&a);
   switch(a){
     case 1: pf("Enter the item\n");
             sf("%d",&item);
             push(item);
             break;
     case 2: item = pop();
             pf("Poped item is = %d\n",item);
             break;
     case 3: item = middle();
             pf("Middle item is = %d\n",item);
             break;
     case 4: deletemiddle();
             break;
     case 5: exit(1);
             break;
     default : pf("wrong choice\n");
     }
     }
     return 0;
     }
     
//---------------------------------------------------------------------------------------------------------------------

   
   
   
   
   
   
   
   
   
   
   
   
