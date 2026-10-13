#include<stdio.h>

    int main(){

    int age, marks; 
    printf("Enter your age\n");
    scanf("%d",&age);
    
    printf("Enter your marks\n");
    scanf("%d",&marks);
    
    switch(age) 
    {  
           case 3 : 
           printf("your age is 3\n");
           break;
           
           case 20:
           printf("your age is 20\n");
           switch(marks) 
           {
            case 30:
            printf("your marks is 30\n");
            break;
            
            default:
            printf("your marks is not 30\n");
           }
           break;
           
           
           case 50:
           printf("your age is 50\n");
           break;
           
           default:
           printf("your age is not 3,20 or 50");
    }       
    return 0;
}
