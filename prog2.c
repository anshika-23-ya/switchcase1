/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    while(1){

    
    printf("\n1 Addition");
    printf("\n2 Substration");
    printf("\n3 Multiplication");
    printf("\n4 Division");
    printf("\n5 Exit");
    printf("Enter the Choice:");
    scanf("%d",&x);
    switch(x)
    {
      case 1:
        printf("Enter the number\n:");
        scanf("%d %d",&a,&b);
        printf("Sum is %d",a+b);
      case 2: 
        printf("Enter the number\n");
        scanf("%d %d",&a,&b);
        printf("Substraction is %d",a-b);
        break;
       case 3:
          printf("Enter the number\n");
          scanf("%d %d ",&a,&b);
          printf("Multiplication  is %d ",a*b);
          break;
        case 4:
          printf("Enter the number\n:")  ;
          scanf("%d %d",&a,&b);
          printf("Quotient is %d",a/b);
          break;

        case 5:
            exit(0);

        default:
           printf("Invalid case");
        printf("\n");}
        return 0; 
    }
}

                                                                                                                                  

        
