#include<stdio.h>
void main()
{
    int count = 0 , flash = 0 , temp = 0;
    printf("1");
    printf("\n");
    
    for(count= 0; count<4;count++)
    {
    
     temp=2;
    printf("1");
    for(flash = 0; flash <count;flash++)
    {
        temp++;
    printf("_");
    }
    printf("%d",temp);
     printf("\n");
   
    }
    
    for(count = 1;count<=6;count++)
    {
    printf("%d",count);
    }
    }