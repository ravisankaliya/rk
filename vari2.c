#include<stdio.h>
void main ()
{
    int a = 500;
    int b = 200;
    int c = 0;


    printf("the value of a is %d and the value of b is %d",a,b);

      c = a;
      a= b;
      b=c;

     printf("\nthe value of a is %d nd the value of b is %d",a,b);
}