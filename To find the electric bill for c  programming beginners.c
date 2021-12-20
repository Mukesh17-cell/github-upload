/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int custno, units;
   float charges,totalc;
   printf(" enter the customer number and units been used  \n");
   scanf(" %d  %d  \n", &custno, &units);
   if(units<=200)
   charges= 0.80 *units;
   else
   if(units<=300)
   charges = 0.80 * 200 + 0.90 *(units -200);
   else 
   {
   charges= 0.80 *200+0.90*100+1*(units-300);
   }
   
   totalc= charges+100;
   if(totalc>400)
   {
       totalc= totalc +0.15*totalc;
   }
   printf(" the total charge is %f\n",totalc);
}
