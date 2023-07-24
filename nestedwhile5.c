#include<stdio.h>
void main ()
{
    int count = 1 , flash = 1;
 
 while(flash<=6)
 {
   
   while(count<=flash)
{
   
     
    printf("%d",flash );
    count ++;
    
}
   printf("\n");
   count = 1;
   flash = flash +1;

 }
   

}