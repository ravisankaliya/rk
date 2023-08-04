// write a orograme to create a menu driven calc given option for 
// square  =  A*A
//  rectangle = length * width
//   cylinder = 2pirh + 2pirr
//    circle = pirr
#include<stdio.h>
 float get_pi()
 {
    float pi = 3.14159;
    return pi;
 }
 int get_value()
 {
    int give = 2;
    return give ;
 }
 void get_ans(int radius , int length , int width ,int temp,int option,int pie )

 {
    float answer;
    
    switch(option)
{
    
    case 1 :
    answer = length * length;
    printf("%f",answer);

    case 2 :
    answer = length * width;
    printf("%f",answer);
    break;

    case 3 :
    pie = get_pi();
    temp = get_value();
    answer = (temp * pie * radius )+ (temp * pie * radius * radius);
    printf("%f",answer);
    break;

    case 4 :
     pie = get_pi();
     answer = pie* radius *radius;
     printf("%f",answer);
      break;

      default :
      printf("in valid number");
      break;
}

 }
void main()
{
    int radius,temp;
    int length;
    int width;
    int option;
    float answer , pie;

do
{
printf("enter value of radius");
scanf("%d",&radius);

printf("enter value of length");
scanf("%d",&length);

printf("enter value of width");
scanf("%d",&width);

printf("\noption 1 is square");
printf("\noption 2 is rectangle");
printf("\noption 3 is cylinder");
printf("\noption 4 is circle");
printf("\nplease select any one option");
scanf("%d",&option);

 get_ans(radius,length,width,length,option,pie);
}while(option>0);

}