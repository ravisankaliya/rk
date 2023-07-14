#include<stdio.h>
void main ()
{

    int weight = 0, foot= 0,inch = 0 ;
    float foot_meter = 0 , inch_meter = 0, height = 0 ;
float bmi = 0;
    printf("enter value of weight");
    scanf("%d",&weight);

    printf("enter value of foot");
    scanf("%d",&foot);

    printf("enter value of inch");
    scanf("%d",&inch);
foot_meter = foot/3.281;
printf("the value of foot meter is %f",foot_meter);

inch_meter = inch/39.37;
printf("the value of inch meter is %f ",inch_meter);

height = foot_meter + inch_meter;
printf("the value of height is %f",height);

bmi = weight / (height * height);
printf("the value of bmi is %f",bmi);

  
  {
    
    
    if(bmi<16  && bmi>0)
    {
        printf("severe thinness");
    }
    else if (bmi<0)
    {
        printf("invalid ");
    }
  

  
     else if(bmi>16 && bmi<=17 )
    {
        printf("moderate thinness");
    }
  

  
  else if(bmi>17 && bmi <= 18.5)
   {
     printf("mild thinness");
   }   


  else if(bmi>18.5 &&bmi <=25)
   {
    printf(" normal");
   }
   

   
   else if(bmi> 25  && bmi <=30)
   {
    printf( "over weight");
   } 

   
  else if (bmi >30 && bmi <= 35)
   {
    printf("obese class 1");
   }
   

  
   else if(bmi>35 &&  bmi <= 40)
   {
    printf("obese class 2");
   }
  

  
   else if(bmi>40)
   {
    printf("obese class 3");
   }

  }

}
