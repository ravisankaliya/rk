// Write a programe to take input for 5 match goals for 5 player find total number of goal for each player and 
// all player also find average for each match and all match
#include<stdio.h>
void main()
{
    int match[5][5];
    int count = 0;
    int flash = 0;
    int total[5];
    int sum =0;
    float  average[5];
    float avg = 0;
    for(flash=0;flash<5;flash++)
    {
    printf("goal of match %d",flash+1);
    for(count = 0; count<5; count++)
    {
    printf("enter value of player %dgoal",count+1);
    scanf("%d",&match[flash][count]);
    }
    }
    for(flash = 0;flash<5;flash++)
    {
    printf("match %d goal ",flash+1);
    for(count = 0; count<5;count++)
    {
    printf("\nthe goal of studen %d is :",count+1);
    printf("%d",match[flash][count]);
    }
    }

for(flash=0;flash<5;flash++)
{
    total[flash] = 0;
for(count = 0;count<5;count++)
{
    total[flash]= total[flash] + match[count][flash] ;
}
    printf("\nthe total goal  player %d is %d",flash+1,total[flash]);
}

sum = total[0]+ total[1]+total[2]+total[3]+total[4];
printf("\ntotal goal of all player is %d",sum);
for(count=0;count<5;count++)
{
average[count]= match[count][0]+match[count][1]+match[count][2]+ match[count][3]+ match[count][4] /5;
printf("\n%d match average is %f",count+1,average[count]);
}

avg = sum / 5;
printf("\ntotal average is %f",avg);

}