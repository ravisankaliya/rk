
// //  write a C program to calculate income tax, gross income, net income from monthly income given by user  
// //  yearly income     tax rate 
//  <3,00,000         5%   
  
//  >=3,00,000 
//  <5,00,000         10%   
  
//  >=5,00,000 
//  <8,00,000         20% 
  
//  >=8,00,000        30%  
// 
     #include<stdio.h>
     void main ()
     {
    int month_income = 0, yearly_income = 0, tax_rate = 0;
     float gross_income = 0, income_tax = 0 ;
     printf("enter value of month income ");
     scanf("%d",&month_income);
     
     yearly_income = month_income *12;
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