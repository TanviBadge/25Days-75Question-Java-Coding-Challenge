#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    
    printf("Enter a string: ");
    gets(str);
    
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
    printf("Length of string = %d\n", length);
    return 0;
}
