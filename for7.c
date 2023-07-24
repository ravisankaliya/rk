#include<stdio.h>
void main()
{
    int count = 0;
    int adda = 0;
    int flash = 4;
    int temp = 1;
    for(count = 0; count < 6 ; count++)
    {
    printf(" ");
    }
    printf("*");
    
    printf("\n");
    for(count = 0; count < 5 ; count++)
    {
    printf(" ");
    }
    
    printf("*");
    printf(" ");
    for(flash =4;flash>0; flash--)
    {
        printf("*");
    printf("\n");
     for(count = 0; count <flash; count++)
    {
    printf(" ");
    }
    temp++;
    for (adda = 0; adda<temp;adda++)
    {
         printf("*");
    printf(" ");
    }
      
    }
    printf("*");
}