// write a programe to findout bmi of user and also find category
#include<stdio.h>
float foot_meter(int foot)
{
    float f = foot/3.281;
    return f;
}
float inch_meter(int inch)
{
    float i = inch/39.37;
    return i;
}
float total(float fo_meter , float in_meter)
{
    float sum = fo_meter + in_meter;
    return sum;
}
float get_bmi(float weight , float height)
{
    float bmi = weight / (height*height);
    return bmi;
}
void category(float bmi)
{
    if(bmi<18)
    {
        printf("you are under weight");
    }
    else if (bmi>=18 && bmi <= 24.9)
    {
        printf("you are normal weight ");
    }
    else if (bmi>=25 && bmi <= 30)
    {      
        printf("you are over weight ");
    }
    else if (bmi>30&& bmi <= 34.9)
    {
        printf("you are obese ");
    }
    else
    {
        printf("you are extremly obese ");
    }

}
void main()
{
    float weight ;
    int foot ,inch;
    float fo_meter , in_meter,height,bmi;

printf("enter your weight");
scanf("%f",&weight);

printf("enter your height in foot");
scanf("%d",&foot);

printf("enter your height in inch ");
scanf("%d",&inch);

fo_meter = foot_meter(foot);
in_meter = inch_meter(inch);

height= total(fo_meter,in_meter);
printf("the value of height is %f",height);

bmi = get_bmi(weight,height);
printf("the value of bmi is %f ",bmi);

category(bmi);
}