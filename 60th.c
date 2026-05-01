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

void deleteByValue(struct Node** head, int value) {
    if (*head == NULL) return;
    
    struct Node* current = *head;
    struct Node* previous = NULL;
    
    if (current != NULL && current->data == value) {
        *head = current->next;
        free(current);
        return;
    }
    
    while (current != NULL && current->data != value) {
        previous = current;
        current = current->next;
    }
    
    if (current == NULL) return;
    
    previous->next = current->next;
    free(current);
}

void deleteByPosition(struct Node** head, int position) {
    if (*head == NULL) return;
    
    struct Node* temp = *head;
    
    if (position == 1) {
        *head = temp->next;
        free(temp);
        return;
    }
    
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL || temp->next == NULL) return;
    
    struct Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
}

void displayList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);
    
    printf("Original: ");
    displayList(head);
    
    deleteByValue(&head, 30);
    printf("After deleting 30: ");
    displayList(head);
    
    deleteByPosition(&head, 2);
    printf("After deleting position 2: ");
    displayList(head);
    
    return 0;
}
