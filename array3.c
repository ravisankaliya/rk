#include<stdio.h>
void main ()
{
    char name [20];
    int count = 0;

printf("enter your name");
    for(count=0;count<20;count++)
    {
       scanf("%c",&name[count]);
       if(name[count]=='\n')
       {
        break;
       }
    }

    printf("your  reverse name is:");
    
    for(count = count -1;count>=0;count--)
    {
        printf("%c",name[count]);
        // if(name[count]=='\n')
        // {
            // break;
        // }
    }
    }