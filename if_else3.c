#include<stdio.h>
void main()
// write a programe to findout user given number odd or even 
{
    int number = 0;
    
    printf("enter value of number ");
    scanf("%d",&number);
    
    if (number/2)
    {
        printf("number is even ");
        
    }
    
    else
    {
        printf("number is odd");
    }
}