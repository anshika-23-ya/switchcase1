/*1. Write a program which takes the month number as an input and display
number of days in that month.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the month:");
    scanf("%d",&x);
    switch (x)
    {
        case 1:
          printf("31 days in January");
          break;
        case 2:
          printf("28 or 29 days in Febuary");
          break;
        case 3:
           printf("31 days in  March");
           break;
        case 4:
           printf("30 days in April");
           break;
        case 5:
          printf("31 days in May");     
          break;  
        case 6:
          printf("30 days in June");
          break;
        case 7:
          printf("31 days in july"); 
          break;
        case 8:
          printf("31 days in August");
          break;
        case 9:
          printf("30 days in september");
          break;
        case 10:
          printf("31 days in october");
          break;
        case 11:
          printf("30 days in november");
          break;
        case 12:
          printf("31 days in december");
        default:
            printf("Invalid Choice");   

    
}
}