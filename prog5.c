/*Convert the following if-else-if construct into switch case: 
if(var == 1) 
System.out.println("good"); 
else if(var == 2) 
System.out.println("better"); 
else if(var == 3) 
System.out.println("best"); 
else 
System.out.println("invalid");*/
#include<stdio.h>
int main()
{
    int var;
    printf("Enter_the_value_of_variable:");
    scanf("%d",&var);
    switch(var)
    {
        case 1:
          if(var==1)
            printf("good");
          else 
            printf("Not good");
          break;
        case 2:
          if(var==2) 
            printf("better");
          else
            printf("Not better");
        break;
        case 3:
          if(var==3)  
           printf("best");
          else
            printf("Not Best");
        break;
        default:
            printf("Invalid case");     

    }
}
