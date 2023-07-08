#include<stdio.h>
void main ()
 { 
      float weight = 0;
      int foot = 0;
      int inch =0;
      float foot_meter = 0, inch_meter= 0, total_meter = 0, bmi = 0;
       printf("enter value of weight in kg");
       scanf ("%f",&weight);

       printf("enter value of height in foot ");
       scanf("%d",&foot);

       printf("enter value of  height in inch");
       scanf("%d",&inch);
       
       printf("the value of weight in kg is %f",weight);
       printf("the value of height in foot is %d and the value of height in inch is %d",foot,inch);
       
       foot_meter = foot/3.281;
       printf("the value of foot_meter is %f",foot_meter);

       inch_meter = inch/39.37;
       printf("the value of inch_meter is %f ",inch_meter);

       total_meter = foot_meter +inch_meter;
       printf("the value of total_meter is %f",total_meter);

        bmi = weight / (total_meter*total_meter);
        printf("the value of bmi is %f ", bmi);
    








 }