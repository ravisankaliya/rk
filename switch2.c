// write  a priograme to create calculator
// additiom
// subtraction
// multiplicitaion
// divison
// modulus
// max
// main
// // equality

#include<stdio.h>
void main()

{

    int number1 = 0 , number2 = 0, answer = 0 , option = 0 ;

printf("enter value of number1");
scanf("%d",&number1);
printf("enter value of number2");
scanf("%d",&number2);


printf("\nenter 1  for  additiom ");
printf("\nenter 2  for  sub ");
printf("\nenter 3  for  mult ");
printf("\nenter 4  for  divison ");
printf("\nenter 5  for   modulus ");
printf("\nenter 6  for  max ");
printf("\nenter 7  for  min ");
printf("\nenter 8  for   equality");

printf("\nplease select any one option");
scanf("%d",&option);

switch( option)

{
    case  1 :
    answer = number1 = number2;
    printf(" the value of answer is %d\n",answer);
    break;

    case 2 :
    answer = number1 - number2;
    printf("the value of answer is %d\n",answer);
    break;

    case 3:
    answer = number1 * number2;
    printf(" the value of answer is %d\n",answer);
    break;

    case 4:
    answer = number1 /number2;
    printf("the value of answer is %d\n",answer);
    break;

    case 5 :
    answer = number1 % number2;
    printf("the value of answer is  %d\n",answer);
    break;

    case 6 :
    if(number1>number1)
    {
        printf("number1  is grater\n");
    }
    else if (number2 >number1)
    {
        printf("number2 is grater\n");
    }
    break;

    case 7 :
    if(number1< number2)
    {
        printf("number a is smaller\n");
    }
    else if (number2<number1)
    {
        printf("number2 smaller\n");
    }
    break;

    case 8:
    if(number1 == number2)
    {
        printf("both are same ");
    }
    else
    {
        printf("not same\n");
    }
    break;

    default:
    printf("invalid number ");
    break;

}


}