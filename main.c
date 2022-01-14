//
//  main.c
//  binomial
//
//  Created by MUKESH KUMAR DHAL on 10/01/22.
//
    
#include<stdio.h>
#include <math.h>
#define MAXGIRLS 5
#define MAXITEMS 4

int main(){
    int i, j, grandtotal;
    int value[MAXGIRLS][MAXITEMS] , girltotal[MAXGIRLS], itemtotal[MAXITEMS];
    
    /*  READING THE VALUES AND CALCULATING THE GIRLS TOTAL */
    printf(" INPUT DATA \n");
    printf(" enter the values one at a time, row wise\n");
    for(i=0;i< MAXGIRLS;i++)
    {
        girltotal[i]=0;
        for(j=0;j<MAXITEMS;j++)
        {
            scanf(" %d",&value[i][j]);
            girltotal[i]= girltotal[i] + value[i][j];
            
        }
    }
    /* COMPUTING THE ITEMS TOTAL */
    for(j=0; j<MAXITEMS;j++)
    {
        itemtotal[j]=0;
        for(i=0; i<MAXGIRLS;i++)
        {
            itemtotal[j]=itemtotal[j]+ value[i][j];
            
            
        }
    }
    
    /*computiing the grand total*/
    grandtotal=0;
    for(i=0;i<MAXGIRLS;i++)
    {
        grandtotal= grandtotal+ girltotal[i];
        
    }
    
    
    /*printing of the reslts*/
    printf(" \n GIRLS TOTAL \n");
    for(i=0;i< MAXGIRLS ;i++)
        printf(" salesgirl[%d]= %d\n", i+1, girltotal[i]);
    printf("\n ITEMS TOTAL\n");
    for(j=0;j<MAXITEMS;j++)
        printf(" itemsno[%d]= %d\n", j+1, itemtotal[j]);
    printf(" grand total=  %d", grandtotal);
    
}
