#include<stdio.h>
void main ()
{
   int  count = 0;
   int num = 1;
   int new = 0;

   while(new <6)
   {
    while(count<num)
  {
    count = count +1;
    printf("%d",count);
  }
     printf("\n");
    count = 0;
    num = num +1 ;
    new = new +1;
   }

  
//     printf("\n");
//     printf("%d",count);
//   count = count+1;
//   printf("%d",count);
}