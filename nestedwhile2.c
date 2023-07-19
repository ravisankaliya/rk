#include<stdio.h>
void main()

{


 int count = 0;
int row = 0;
int col = 6;

while(row<6)
{

   while(count<col)
   {
    count = count+1;

    printf("%d",count);
    
   }

printf("\n");
count = 0;
col= col -1;
row= row +1;
}


}