#include<stdio.h>
void main()
{
     int table = 0;
     int multi = 1;
     int answer = 0;
     int flash = 0;

     printf("enter value of table ");
     scanf("%d",&table);
for (multi = 1 ; flash<5 ; flash++)

     {
for (multi = 1; multi<= 10;  multi ++)
     {
          answer = table * multi ;
          printf("\n%dX %d = %d ",table,multi,answer);
     // multi = multi++;
     }
     printf("\n");
table = table+1;
// multi = 1;
     }

//      for(multi = 1; multi <=10 ; multi++)
// {
//    answer = table * multi;
//    printf("\n%d x %d = %d",table,multi,answer);






     


}