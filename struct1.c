#include<stdio.h>

    struct person
    {
         char name[20];
        int age ;
        float weight ;

    
    };
void main()
{
     struct person s[3];
     int count ;


for(count=0;count<3;count++)
{
    printf("enter information about student %d",count+1);
    printf("\nenter your name");
    scanf("%s",&s[count].name );
    printf("enter your age ");
    scanf("%d",&s[count].age);
    printf("enter your weight");
    scanf("%f",&s[count].weight);
}
for(count=0;count<3;count++)
{
    printf("\ninformation about student %d is:",count+1);
 printf("\nyour name is %s",s[count].name);
 printf("\nyour age is %d",s[count].age);
 printf("\nyour weight is %f",s[count].weight);
}
}