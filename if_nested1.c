#include<stdio.h>
void main()
{
    int monthely_income = 0;
    int yearly_income = 0;
    int tax_rate = 0;
    float income_tax = 0;
    float gross_income = 0;

    printf("enter value of monthely income");
    scanf("%d",&monthely_income);

    if (monthely_income<=0)
    {
        printf("this monthly income is not valid ");

    }
    else 
{
yearly_income = monthely_income *12;
     printf("the value of year income is %d", yearly_income);
     
     if  (yearly_income<300000) 
     {
         tax_rate = 5;
     }
     else if (yearly_income >=300000 && yearly_income <500000)
     {
         tax_rate = 10;
     }
     else if ( yearly_income >= 500000 && yearly_income <800000)
     {
         tax_rate = 20;
     }
     else if (yearly_income >=800000)
     {
         tax_rate = 30;
     }
     printf("the value of tax rate %d",tax_rate);
     income_tax  = yearly_income * tax_rate/100;
     printf("the value of tax amount %f", income_tax);
     gross_income= yearly_income - income_tax ;
     printf("the value of income tax %f", gross_income);
}
     
}