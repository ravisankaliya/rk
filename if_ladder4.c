#include<stdio.h>
void main()
// write a programe to findout largest variable out of given 3 variable  
{
 int first = 0,second= 0 ,third= 0;

printf("enter first variable");
 scanf("%d",&first);

printf("enter secondvariable");
scanf("%d",&second);

printf("enter third  variable");
scanf("%d",&third);

if(first>=second && first >= third  )
{
    printf("number first is largest");
}
if(second>= first && second>=third)
{
    printf("number second is largest ");
}
if (third>=first && third>= second)
{
    printf("number third is largest");
}

else
{
    printf("all is same ");
}












 
}