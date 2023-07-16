// write a programe to print following patern 
// 1   2   4   6   8  10   12  8000

#include<stdio.h>
void main()
{

    int number = 1, answer = 0;

    answer = number;
    printf("%d",answer);

    while(answer<8000)

  {
     answer = number + 1;
    printf("%d",answer);
    number = answer + 1;
  }
    
// answer = number + 1;
// printf("%d",answer);
// number = answer +1;

// answer = number +1;
// printf("%d",answer);
// number = answer +1;




}