#include <stdio.h>

struct StructData {
    int i;
    float f;
    char str[20];
};

union UnionData {
    int i;
    float f;
    char str[20];
};

int main() {
    struct StructData s;
    union UnionData u;
    
    printf("Size of struct: %d bytes\n", sizeof(s));
    printf("Size of union: %d bytes\n", sizeof(u));
    
    return 0;
}
