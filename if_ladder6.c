/** write a programe to calculate final electricity bill based upon below given ciiateria take monthly electricity unit from user as input 
unit                   price per unit 
<100                      1
>100 & <200               2
>200& < 300               3
>300& <400                4
>400                      5*/

#include<stdio.h>
void main ()
{
 int unit = 0;
int price = 0;
float bill_amount = 0,charge = 0, total_amount = 0 ; 

 printf("enter value of unit");
 scanf("%d",unit);

 if (unit<100)
 {
    price = 1;

 }
 else if (unit>=100 && unit< 200)
 {
    price = 2;

 }
 else if (unit>=200 && unit<300)
 {
    price = 3;

 }
 else if ( unit>=300 && unit<400)
 {
    price= 4;
 }
 else if (unit>400)
 {
    price = 5;

 }

 bill_amount = unit*price ;
 printf("the value of bill amount%f ",bill_amount);
 charge = bill_amount*5/100;
 printf("the value of charge %f ",charge);
 total_amount = bill_amount+ charge;
 printf(" the value of total amount is %f",total_amount);
}