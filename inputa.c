#include<stdio.h>
 void main ()      // write a program to peform spit of any 3 digit number
{
    int number = 0;
    int num1= 0;
    int num2=0;
    int num3 =0; 

    printf(" enter value of number");
    scanf("%d",&number);

    num1= number/100;
    num2=number/10- (num1*10);
    num3= number -( num1*100+num2*10);

    printf(" your answer is num1 %d and num2 is %d and num3 is %d",num1 ,num2,num3);   
}
