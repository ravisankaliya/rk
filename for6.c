#include<stdio.h>
void main()

{
int count = 0, flash = 0, temp = 3 , size = 0;

printf("enter value of size ");
scanf("%d",&size);

for(count = 0; count<size; count++)
{
    printf("*");
    // count = count ++;
}
temp = size-3;
    
    for (flash = 0;flash<size-2; flash++)
    {
        printf("\n");
    printf("*");
    for (count = 0; count<temp ; count++)
    {
    printf(" ");
    }
    printf("*");
    temp--;
    }

    printf("\n");
    printf("*");
}