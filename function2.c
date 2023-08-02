#include<stdio.h>

void print_designe(char symbol, int size)
{
    int count = 0;
    for(count = 0; count<size;count++)
    {
    printf("%c",symbol);
    }
}
void main()
{
    char symbol ;
    int size ;
    

    printf("enter symbole for line");
    scanf("%c",&symbol);
    printf("enter size for symbole");
    scanf("%d",&size);

    print_designe(symbol,size);
    printf("\ns ravi \n");
    print_designe(symbol,size);

}