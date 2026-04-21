#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

float calculateArea(struct Rectangle r) {
    return r.length * r.width;
}

int main() {
    struct Rectangle rect;
    
    printf("Enter length and width: ");
    scanf("%f %f", &rect.length, &rect.width);
    
    printf("Area = %.2f\n", calculateArea(rect));
    
    return 0;
}
