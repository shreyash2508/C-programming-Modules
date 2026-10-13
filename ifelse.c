#include<stdio.h>

int main(){
    int age;

    printf("Enter Your age:-");
    scanf("%d", &age);

    if (age==18){
        printf("You are Just about 18 cant vote");
    }
        else if (age<18)
        {
            printf("You are Just below 18 cant vote");
        }
        else if (age>18)
        {
            printf("Congratulations now you can vote");
        }    
    else {
            printf("Enter valid Age");
        }
    return 0;
}