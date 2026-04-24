#include <stdio.h>

int main() {
    int arr[100], n, search, first, last, middle;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &search);
    
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    
    while(first <= last) {
        if(arr[middle] < search)
            first = middle + 1;
        else if(arr[middle] == search) {
            printf("Element found at position %d\n", middle+1);
            break;
        }
        else
            last = middle - 1;
        
        middle = (first + last) / 2;
    }
    
    if(first > last)
        printf("Element not found!\n");
    
    return 0;
}
