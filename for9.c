#include<stdio.h>
void main()
{
  int count=0,flash=0,temp = 4,root = 3;
  for(count=0;count<6;count++)
  {
     printf("_");
  }
  printf("*");
  printf("\n");
  for(count=0;count<5;count++)
  {
  printf("_");
  }
  printf("*");
  printf("_");
  printf("*");
  for(flash=0;flash<4;flash++)
  {
  printf("\n");
  for(count=0;count<temp;count++)
  {
  printf("_");
     
  }
  printf("*");
  for(count=0;count<root;count++)
  printf("_");
     
  root =root+2;
     
  printf("*");
  temp--;
  root = root++;
  }
  printf("\n");
  for(count = 0;count<7;count++)
{
  printf("* ");
}
}