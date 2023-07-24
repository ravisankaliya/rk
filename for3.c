// write a programe to print multiplication table of five 
// 5 x 1 = 5
// 5 x 2 = 10



// .. 5 x 10 = 100
#include<stdio.h>
void main ()
{
    int table = 5;
    int multi = 1;
    int answer = 5;

    
    for (table = 5;multi <=10;  answer = table*multi)
    {
        printf("\n%d X %d = %d,",table ,multi , answer);
    multi = multi +1;
    // answer = answer +  5;

    }


    // printf("%d X %d = %d",table , multi , answer );
    // multi = multi +1;
    // answer = answer + 5;

}