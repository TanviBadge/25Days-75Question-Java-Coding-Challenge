#include <stdio.h>

int main() {
    FILE *source, *dest;
    char ch;
    
    source = fopen("source.txt", "r");
    dest = fopen("destination.txt", "w");
    
    if(source == NULL || dest == NULL) {
        printf("Error opening files!\n");
        return 1;
    }
    
    while((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    
    printf("File copied successfully!\n");
    
    fclose(source);
    fclose(dest);
    
    return 0;
}
