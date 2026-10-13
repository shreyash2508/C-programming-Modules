#include<stdio.h>
#include<string.h>

int main(){
    int age;

    printf("Enter your age:-");

    scanf("%d", &age);

    printf("Your entered Age is %d ", age);

    char str[100];
    printf("Enter a string", str);

    scanf("%s", str);
    printf("You entered %s", str);

  char name[20];
    
    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);
    
    printf("Hello, %s", name);
    return 0;
}