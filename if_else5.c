#include<stdio.h>
void main ()
// write a programe to findout whether given year  N is  milinium year or not
{
int year = 0;
printf("enter value of years");
scanf("%d",&year);

if (year >=1000 )
{
    printf("it is  milinium year");
}
else
{
    printf("it is not milinium year");
}
}