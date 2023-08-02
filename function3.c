// write a programe to peforme subtraction of 2 variable
#include<stdio.h>
void sub (int num1 ,int num2)

{
   int  answer  = 0;
    answer = num1 - num2;
    printf("%d",answer);
}
void main ()
{
    int num1 = 0;
    int num2 = 0;

    printf("enter value of num1");
    scanf("%d",&num1);
    printf("emter value of num2");
    scanf("%d",&num2);

    sub(num1,num2);
}