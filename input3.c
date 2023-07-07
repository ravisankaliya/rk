#include<stdio.h>
void main ()
{
    int number = 0;
    int first=0;
    int second=0;
    int third = 0;

    printf("enter value of number");
    scanf("%d",&number);

    first = number/100;
    second= number/10- (first*10);
    third = number-(first*100+second*10);

    printf("the  value of number first is %d,second is %d and third is %d",first,second,third);
}