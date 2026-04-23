#include <stdio.h>

int main() {
    FILE *fptr;
    char data[100];
    
    fptr = fopen("output.txt", "w");
    
    if(fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Enter text to write: ");
    fgets(data, 100, stdin);
    
    fprintf(fptr, "%s", data);
    
    fclose(fptr);
    printf("Data written successfully!\n");
    
    return 0;
}
