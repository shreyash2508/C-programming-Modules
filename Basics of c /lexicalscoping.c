/*
#include <stdio.h>

void print(void (*fp)()) {
    fp();    
}

void outer(int x) {
    int y = 10;
    void inner() {
        printf("%d\n", x + y);
    }
    
    // Creating pointer to inner()
    void (*fp)() = &inner;
    
    // Passing fp pointer to other function
    // print(fp);
}

int main() {
    
    // Calling enclosing function
    outer(5);
    return 0;
}
*/
