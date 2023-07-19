#include <stdio.h> 
 void main() 
 { 
      int count = 0; 
      int col  = 6; 
      int row = 0; 
  
      while(col  < 6) 
      { 
           while (count < col) 
           { 
                printf("*"); 
                count = count + 1; 
                // count--; 
           } 
           printf("\n");
           row = row +1;
           count = 0;
           col = col - 1 ; 
           
           
      }
 }