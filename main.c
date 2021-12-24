/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

 main()
{
    int count;
    float value, high , low, range, average, sum;
    printf(" dear user enter the values in a line : when negative number encountered the process will get over\n");
    sum=0;
    count=0;
    input:
    scanf(" %f \n ", &value);
    if( value<0 )goto output;
    count = count +1;
    if(count ==1)
    high =low= value;
    else if( value>high)
    high= value;
    else if (value <low)
    low= value;
    sum = sum +value;
    goto input;
    
    output:
    average= sum/ count;
    range = high- low;
    printf("\n\n");
    printf(" total values : %d\n", count);
    printf("  highest value= %f  \n lowest value =%f\n", high, low);
    printf(" range = %f\n  average =%f", range, average);
}

