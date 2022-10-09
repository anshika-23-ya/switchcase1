//Program to Convert even number into its upper nearest odd number
//Switch Statement.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    
    switch(a%2==0)
    {
        case 0:
          printf("%d is upper nearest odd number:",a+1);
        break;  
        case 1:
          printf("%d is not upper nearest odd number:",a);
    }
}