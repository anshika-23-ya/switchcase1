
#include<stdio.h>
int  main()
{
    int a,b,c,d;
    printf("Enter the number");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    switch(d>0)
    {
      case 1 :
    
          printf(" %d is roots are real and distinct (unequal)",d);
        
        break; 
      case 2:   
        if(d<0)
          printf("%d is roots are real and equal (coincident)",d);
        else
          printf(" %d roots are  not real and equal",d);  
        break;
      case 3:
         if(d=0) 
           printf(" %d is roots are imaginary and unequal",d);
         else 
           printf(" %d roots are not imaginary",d);  
      break; 
    }




     

}