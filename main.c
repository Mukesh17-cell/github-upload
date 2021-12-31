//
//  main.c
//  interest table for investment
//
//  Created by MUKESH KUMAR DHAL on 31/12/21.
//

#include <stdio.h>
#include<math.h>

int main() {
    int year ,period;
    float inrate ,amount , value;
    printf(" dear user enter the amount that you want to invest\n");
    scanf(" %f", &amount);
    printf(" enter the time period for which you want to invest\n");
    scanf(" %d", &period);
    printf(" enter the interest rate been offered by the bank\n");
    scanf(" %f ",&inrate);
    printf("  AMOUNT THAT IS INVESTED       INRATE        PERIOD \n");
    printf("         %f                      %f                %d     \n", amount, inrate, period);
    printf("        value                year \n");
    year=1;
    while(year<=period)
    {
        value= amount + inrate * amount;
        amount=value;
       
        printf("     %f                                %d \n", value ,  year);
        year+=1;
        
    }
}
