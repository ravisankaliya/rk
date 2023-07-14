// write a programe to fid out smallest out of given three variable without using and or and els if ladder

#include<stdio.h>
void main()

{

    int first = 0 , second = 0 , third = 0;


printf("enter value of first");
scanf("%d",&first);

printf("enter value of second");
scanf("%d",&second);

printf("enter value of third");
scanf("%d",&third);
if(first == second  && second == third)
{
    printf("all are same");
}
else 
{


if(first<second)
{
// if first smaller than second 
    if(first<third)
    {
        printf("first is smallest");
    }
    else
    {
        printf("third is smallest");
    }
}
else
{
// second is smallest than first
     if(second<third)
 {
    printf("second is smallest");
 
 }
 else
  {
    printf("third is smallest");
  }
}

}






}