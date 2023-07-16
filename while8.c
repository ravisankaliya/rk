// write a programe to solve following seriese
// 1 ,5,12,22,35,51, ...... 3000

#include<stdio.h>
void main ()
{
    int number = 0 , answer = 1 , number1 = 4;

number = answer;
printf("%d",number);

while (number< 3000)
{
    answer = number + number1;
printf("%d",answer);
number1 = number1 +3;

number = answer + number1;
printf("%d",number);
number1 =  number1+ 3;
}


}