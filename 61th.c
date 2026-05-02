#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    struct Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

int search(struct Node* head, int key) {
    int position = 1;
    while (head != NULL) {
        if (head->data == key) {
            return position;
        }
        head = head->next;
        position++;
    }
    return -1;
}

int main() {
    struct Node* head = NULL;
    
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);
    
    int result = search(head, 30);
    if (result != -1) {
        printf("Element 30 found at position %d\n", result);
    } else {
        printf("Element not found\n");
    }
    
    result = search(head, 100);
    if (result != -1) {
        printf("Element 100 found at position %d\n", result);
    } else {
        printf("Element 100 not found\n");
    }
    
    return 0;
}
