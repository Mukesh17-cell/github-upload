//
//  main.c
//  print the inventory report
//
//  Created by MUKESH KUMAR DHAL on 29/12/21.
//

#include <stdio.h>
#include<math.h>
#define ITEMS 4
int main()
{
    int i, quantity[5];
    float rate [5], value, total_value;
    char code[5][5];
    i=1;
    while(i<=ITEMS)
    {
        
        printf(" enter the code , quantity, and rate:\n");
        scanf(" %s  %d  %f ", code[i], &quantity[i],&rate[i]);
        i++;
        
    }
    printf("\n\n");
    printf(" INVENTORY   REPORT \n");
    printf(" ---------------------------\n");
    printf("  code     quantity      rate    value\n");
    printf("-----------------------------\n");
    total_value=0;
    i=1;
    while( i<=ITEMS)
    {
        value= quantity[i]*rate[i];
        printf(" %5s   %10d   %10.2f %e \n ", code[i],quantity[i], rate[i],value);
        total_value+= value;
        i++;
        
    }
    printf("---------------------\n");
    printf(" toata value = %e\n", total_value);
    printf("--------------------\n");
    
    
    
    
           }
   
