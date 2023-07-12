#include<stdio.h>
void main()
// write a programe to findout zodiac sigh of user 
 {
int month = 0, date = 0;

printf("enter value of month");
scanf("%d",&month);

printf("enter value of date ");
scanf("%d",&date);

if ( month == 3 && date >=21 && date <=31 || month ==4 && date<=19 && date >0)
{
    printf("it is aries ");
}
 
 else if ( month ==4 && date>=20 && date <= 30 || month  == 5 && date <=20 && date >=0) 
{
 printf("it is taurus");
}
 else if (month == 5 && date >=21 && date<=31 || month == 6 && date <=20 && date >=0)
 {
    printf("it is gemini");

 }
 else if ( month == 6 && date >= 21 && date<=30 || month == 7 && date <=22 && date >=0)
 {
    printf("it is cancer");

 }
else if ( month == 7 && date>=23 && date <=31 || month == 8 && date <= 22 && date >=0)
{ 
    printf("it is leo");
}
else if ( month == 8 && date>=23 && date <=31 || month == 9 && date <= 22 && date >=0)
{ 
    printf("it is virgo");
}
else if ( month == 9&& date>=23 && date <=30 || month == 10 && date <= 22 && date >=0)
{ 
    printf("it is libra");
}
else if ( month ==10 && date>=23 && date <=31 || month == 11 && date <= 21 && date >=0)
{ 
    printf("it is scorpio");
}
else if ( month == 11 && date>=22 && date <=31 || month == 12 && date <= 22 && date >=0)
{ 
    printf("it is sagittarius");
}
else if ( month == 12 && date>= 22&& date <=31 || month == 1 && date <= 19 && date >=0)
{ 
    printf("it is capricorn");
}
else if ( month == 1 && date>=20 && date <=31 || month == 2 && date <= 18 && date >=0)
{ 
    printf("it is aquarius");
}
else if ( month == 2 && date>=19 && date <=31 || month == 3 && date <= 20 && date >=0)
{ 
    printf("it is pisces");
}

else
{

printf( good byy);

}


















}