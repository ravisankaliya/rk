#include<stdio.h>
void main () // input and find simple intrest
{
    int number  = 0 ;
    int price = 0;
    float rate = 0;
    float years = 0;
    float answer = 0;
    printf("enter value of number ");
    scanf("%d",&number);

    printf("enter value of price");
    scanf("%d",&price);
    
    printf("enter value of rate");
    scanf("%f",&rate);

    printf("enter value of years");
    scanf("%f",&years);

    answer = price * rate* years/ number;
    printf("your answer is %f",answer);
}