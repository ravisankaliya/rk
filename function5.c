// write a programe to peform multiplication of 2 variable using function
#include<stdio.h>
int multi(int num1,int num2)
{
    int answer;
    answer = num1*num2;
    return answer;
}
void main()
{
    int num1;
    int num2;
    int ans ;
printf("enter value of num1");
scanf("%d",&num1);

printf("enter value of num2");
scanf("%d",&num2);

ans = multi(num1,num2);
printf("your answer is %d",ans);

}