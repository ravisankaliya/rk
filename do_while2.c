// Write a programe to create a menu driven calc 
 // ->addition 
 // ->subtraction 
 // ->multiplication 
 // ->division 
 // ->modulus 
 // ->max 
 // ->min 
 // ->eqaulity 
 #include <stdio.h> 
 void main() 
 { 
      int number1 = 0, number2 = 0, option = 1, answer = 0; 
      do 
      { 
           printf("Enter value of number 1 "); 
           scanf("%d", &number1); 
           printf("Enter value of number 2 "); 
           scanf("%d", &number2); 
  
           printf("\nEnter 1 for addition "); 
           printf("\nEnter 2 for Subtraction "); 
           printf("\nEnter 3 for multiplication "); 
           printf("\nEnter 4 for divsion "); 
           printf("\nEnter 5 for modulus "); 
           printf("\nEnter 6 for max "); 
           printf("\nEnter 7 for min "); 
           printf("\nEnter 8 for equality  "); 
           printf("\nEnter 0 for exit "); 
           printf("\nPlease Select any one option "); 
           scanf("%d", &option); 
  
           switch (option) 
           { 
           case 1: 
                answer = number1 + number2; 
                printf("the value of answer is %d ", answer); 
                break; 
  
           case 2: 
                answer = number1 - number2; 
                printf("the value of answer is %d ", answer); 
                break; 
  
           case 3: 
                answer = number1 * number2; 
                printf("the value of answer is %d ", answer); 
                break; 
  
           case 4: 
                answer = number1 / number2; 
                printf("the value of answer is %d ", answer); 
                break; 
  
           case 5: 
                answer = number1 % number2; 
                printf("the value of answer is %d ", answer); 
                break; 
  
           case 6: 
                if (number1 > number2) 
                { 
                     printf("number 1 is greater "); 
                } 
                else if (number2 > number1) 
                { 
                     printf("number 2 is greater "); 
                } 
                break; 
  
           case 7: 
                if (number1 < number2) 
                { 
                     printf("number 1 is smallest "); 
                } 
                else if (number2 < number1) 
                { 
                     printf("number 2 is smallest "); 
                } 
                break; 
  
           case 8: 
                if (number1 == number2) 
                { 
                     printf("both are same "); 
                } 
                else 
                { 
                     printf("both are not same"); 
                } 
                break; 
  
           case 0: 
                printf("Goodbyee..."); 
                break; 
  
           default: 
                printf("invalid option "); 
                break; 
           } 
      } while (option > 0); 
 }