#include<stdio.h>
void main ()           
//  write a progrram to perform of spit two digit number
{
    int number = 0;
    int first = 0;
    int second=0;

    printf("enter value of number ");
    scanf("%d",&number);

    first = number /10;
    second = number-(first*10);

    printf("the value of first is %d and value of second is %d",first,second);
}