// write a proframe to find out area of circle

#include<stdio.h>
float get_pi()
{
    float pi = 3.14159;
    return pi;
}
void main()
{
   int radius ;
  float pi ;
  float answer ;

printf("enter value of radius");
scanf("%d",&radius);
  pi = get_pi();
  answer = pi * (radius*radius);
printf("the area of circle is %f",answer);
}