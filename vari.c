#include<stdio.h>
void main ()
{
    int a = 5;
    int b = 10;

    printf("the value of a is %d and the valu of b is %d", a,b);

    a = a+b;
    b= a-b;
    a= a-b;

    printf("\nthe value of a is %d and the value of b is %d", a,b);



}