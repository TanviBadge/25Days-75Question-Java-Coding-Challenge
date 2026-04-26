#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *str;
    int len, i, isPalindrome = 1;
    
    if(argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }
    
    str = argv[1];
    len = strlen(str);
    
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if(isPalindrome)
        printf("%s is palindrome\n", str);
    else
        printf("%s is not palindrome\n", str);
    
    return 0;
}
