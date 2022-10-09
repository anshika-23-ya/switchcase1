/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,x;
    while(1)
    {
    printf("Enter the choice:");
    printf("\n1 Isosceles");
    printf("\n2 Right angle Triangle");
    printf("\n3 Equilateral angle");
    printf("\n4Exit");
    scanf("%d",&x);
    printf("Enter_the_sides");
    scanf("%d %d %d",&a,&b,&c);
    switch(x)
    {
     case 1:
        if(a==b||b==c||c==a)
         printf("Isosceles");
        else
          printf("Not isosceles");
     case 2:
        if(a*a==b*b+c*c||b*b==a*a+c*c|| c*c==b*b+a*a) 
          printf("Right angle Triangle");
        else
           printf("Not right angle Triangle");
     case 3:
         if((a==b)  &&(b==c))
           printf("Equilateral angle");
         else
            printf("Not equailateral angle");
      case 4:
        exit(0);
      default:
        printf("Case is not present");} 
        return 0;         
              
    }

}