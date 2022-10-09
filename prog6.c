/*Program to check whether a year is a leap year or not. Using switch statement*/
#include<stdio.h>
int main()
{
    int y=2003;
   
    switch(y%100==0)
    {
        case 1:switch(y%400 == 0)
        {
           case 0: printf("Leap year");break;
           case 1: printf("Non leap year");break;
        }
    
        case 0:switch (y%4 == 0)
        {
            case 1:
              printf("Leap Year");
            break;
            case 0:
              printf("Non Leap Year");
            break;}   
        
        
        
            
        }
        
         
    }

