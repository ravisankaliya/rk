// write a programe to print following pattern
// 1,6,15,28,45,66,91,120,.....10000
// 5,9,13,17,21,25,29,33 ....
// 4 +4+4+4+4+4+4+4+4+4  .....

#include<stdio.h>
void main ()
{
    int number = 1;
    int  answer = 0;
    int  mosko = 5;
    answer = number  ;
    printf("%d",answer);

    for (mosko = 5; answer <10000;  mosko = mosko +4)
    {
        answer = answer + mosko ;
    printf("%d",answer);
    // mosko = mosko +4;
    }

     
    //  answer = answer + mosko ;
    //  printf("%d",answer);
    //  mosko = mosko +4;

    //  answer = answer + mosko ;
    //  printf("%d",answer);
}