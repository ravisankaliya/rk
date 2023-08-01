// write a programe to store 5 subject marks of 5 student
#include<stdio.h>
void main ()
{
    int student[5][5];
    int count = 0;
    int flash=0;
    float average = 0;
    int total[5];
    for(flash=0;flash<5;flash++)
    {
    printf("\nenter marks of student %d",flash+1);
    for(count = 0;count<5;count++)
    {
    printf("\nenter marks of subject %d",count+1);
    scanf("%d",&student[flash][count]);
    }
    }
    for(flash=0;flash<5;flash++)
    {
  printf("\nmark of student %d : ",flash+1);
  for(count = 0;count<5;count++)
  {
  printf("\nmark of subject %d is %d",count+1,student[flash][count]);
  }
    }
    for (flash = 0; flash < 5; flash++) 
      { 
           total[flash] = 0; 
           for (count = 0; count < 5; count++) 
           { 
                total[flash] = total[flash] + student[flash][count]; 
           } 
           printf("\nThe value of total for student %d is %d ", flash + 1, total[flash]); 
      } 
      for(count=0;count<5;count++)
      {
      average = average+total[count];
      }
      average = average/5;
      printf("\nthe value of over all student mark average is %f",average);


}