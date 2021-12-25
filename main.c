/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

void  main()
{
   int i;
   char month[12][20]={"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY",
                        "AUGUST","SEPTEMBER","OCTOBER", "NOVEMBER","DECEMBER"};
   
   printf(" enter the month value\n");
   scanf(" %d",&i);
   if(i<1||i>12)
   {
   printf(" the value been entered is an error , pls give a valid input\n");
   getch();
   }
     if(i!=12)
   printf(" %s comes before the month %s", month[i-1],month[i]);
   else
   printf(" %s comes before the month %s\n", month[i-1], month[0]);
   getch();
}
