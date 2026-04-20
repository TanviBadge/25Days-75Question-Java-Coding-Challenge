#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, new_n, i;
    
    printf("Enter initial size: ");
    scanf("%d", &n);
    
    arr = (int*)malloc(n * sizeof(int));
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter new size: ");
    scanf("%d", &new_n);
    
    arr = (int*)realloc(arr, new_n * sizeof(int));
    
    if(new_n > n) {
        printf("Enter %d more elements: ", new_n - n);
        for(i = n; i < new_n; i++) {
            scanf("%d", &arr[i]);
        }
    }
    
    printf("All elements: ");
    for(i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    return 0;
}
