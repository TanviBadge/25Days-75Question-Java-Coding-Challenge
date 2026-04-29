#include <stdio.h>

#define DEBUG 1

int main() {
    int x = 10, y = 20;
    
    #ifdef DEBUG
        printf("Debug mode ON\n");
        printf("x = %d, y = %d\n", x, y);
    #else
        printf("Release mode\n");
    #endif
    
    printf("Sum = %d\n", x + y);
    
    return 0;
}
