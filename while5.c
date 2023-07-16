// write a programe to print all odd number till 10000

#include<stdio.h>
void main()
{

    int number = 1,answer = 0;

    answer = number ;
    printf("%d",answer) ;

    answer = number + 2;
    printf("%d",answer);
    number = answer +1;

    while(answer< 9999)
    {
        answer = number +1;
    printf("%d",answer);
    number = answer +1;
}
    // answer = number +1;
    // printf("%d",answer);
    // number = answer +1;

 
}