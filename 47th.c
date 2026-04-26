#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0, i;
    
    if(argc < 2) {
        printf("Usage: %s <numbers>\n", argv[0]);
        return 1;
    }
    
    for(i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }
    
    printf("Sum = %d\n", sum);
    return 0;
}
