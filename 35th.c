#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[5];
    int i;
    
    for(i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    
    printf("\nEmployee Details:\n");
    for(i = 0; i < 5; i++) {
        printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    
    return 0;
}
