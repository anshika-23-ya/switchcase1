/*3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/
#include<stdio.h>
int main()
{
    int y;
    printf("Enter_the_number:");
    scanf("%d ",&y);
    switch(y)
    {
        case 1:
          printf("Today is Monday");
          break;
        case 2:
          printf("Today is Tuesday");
          break;
        case 3:
          printf("Today is Wednesday");
          break;
        case 4:
          printf("Today is Thursday");
          break;
        case 5:
           printf("Today is Friday ");
           break;
        case 6:
           printf("Today is saturday");
           break;
        case 7:
          printf("Today is sunday");
          break;
        default:
          printf("case is not found");
                   
    }
}