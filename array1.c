// write a programe to score of  5 match  of one player and also findout  averade and total
#include<stdio.h>
void main()
{
int match[5],count,total;
float average = 0;
int number = 0;
for(count =0;count<5;count++)
{

printf("enter score of inning %d ",count+1);
scanf("%d",&match[count]);

}
count=0;
for(count = 0;count<5;count++)
{
printf("\nthe score of inning %d is %d",number+1,match[count]);
number++;
}

total = 0;
count=0;
while(count<5)
{
total = total+match[count];
count++;
}
printf("\nthe value of total match score is %d",total);

average = total/5;
printf("\nthe value of average is %f",average);

}