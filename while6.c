//  write  a programe to print following patern
//  2 , 1 , 3 , 4 , 7 , 11 , 18 , 29 , 47 , 76 , 123 , ..... 300
#include<stdio.h>
void main()

{

  int number1 = 2, answer = 0 ;

  answer = number1;      //= 2
  printf("%d",answer);

  number1= number1 -1;    // = 1
  printf("%d",number1);

  while(answer < 300)

  {
    answer = answer + number1;   // = 3
  printf("%d",answer);

  number1 = answer + number1 ; // = 4
printf("%d",number1);
  }



}











  


