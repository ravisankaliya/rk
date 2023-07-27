// write a programe to findout factrol of given number 
// 5 = 5 * 4 * 3 * 2* 1 = 120

#include<stdio.h>
void main()
{
    int number = 0,answer = 0,count = 2;

    printf("enter  value of number ");
    scanf("%d",&number);

answer = number * (number-1);
do
{
answer = answer*(number -count);
count++;
}while(count<number);
printf("the value of answer is %d",answer);

}