#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    
    printf("Program name: %s\n", argv[0]);
    printf("Number of arguments: %d\n", argc);
    
    if(argc > 1) {
        printf("Arguments: ");
        for(i = 1; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    }
    
    return 0;
}
