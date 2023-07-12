#include<stdio.h>
void main()
// write a programe to findout whether the given alphabet is vowel or not 
{
char latter = '.';

printf("enter any alphabrt");
scanf("%c",&latter);

if (latter== 'a' ||  latter == 'e' || latter =='i' || latter == 'o' || latter == 'u' || latter == 'A' || latter == 'E' || latter == 'I' || latter == 'O' ||latter == 'U')

{
    printf("it is vowel");
}
else 
{
    printf("it is consonent ");
}
}