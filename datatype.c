#include<stdio.h>
#include<string.h>

int main(){
    float val=13.443;
    char ch='Q';
    int arr[5] = {10, 20, 30, 40, 50};
    int x = 10;
    int *ptr = &x;

    /*
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void *)&x);
    printf("Value using pointer: %d\n", *ptr);
    printf("First element: %d\n", arr[0]);
    printf("Third element: %d\n", arr[2]);
    printf("the D Word is:%f \n",val);
    printf("Dream COmpany is:%c", ch);
    */


    printf("The size of int: %d\n", sizeof(int));
    printf("The size of char: %d\n", sizeof(char));
    printf("The size of float: %d\n", sizeof(float));
    printf("The size of double: %d", sizeof(double));
    return 0;
}