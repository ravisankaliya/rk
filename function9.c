//  create square 
//  ********
//  *      *
//  *      *            
//  *      *
//  *      *
//  *      *
//  *      *
//  ********

 #include<stdio.h>
 void get_pyramid()
 {
     int count,space,flash;
    for(count=0;count<8;count++)
    {
    printf("*");
    }
    for(flash=0;flash<7;flash++)

    {
        printf("\n");
    printf("*");
    for(space=0;space<6;space++)
    {
    printf("_");
    }
    printf("*");
    }
    printf("\n");
    for(count=0;count<8;count++)
    {
    printf("*");
    }
 }
 void main()

 {
   get_pyramid();
 }