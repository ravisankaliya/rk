// write a programe to solve folloving serise

// 0 , 1 , 3, 6, 10, 15, 21, 28, ..... 1000

#include<stdio.h>
void main()
{

    int number = 0, answer = 1 ,number1 = 1 ;

    answer = number;
    printf("%d",answer);
     while( number < 1000)
    {
        number =  answer + number1;
    printf("%d",number);
    number1 = number1 + 1;

    answer = number + number1;
    printf("%d",answer);
    number1 = number1 +1;
    }

    // number = answer +  number1 ;
    // printf("%d",number);
    // number1 = number1 +1;

    // answer  = number + number1;
    // printf("%d", answer);
    // number1 = number1 + 1;





}