#include <stdio.h>

#define PI 3.14159
#define AREA(r) (PI * (r) * (r))
#define CIRCLE(r) (2 * PI * (r))

int main() {
    float radius;
    
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    printf("Area = %.2f\n", AREA(radius));
    printf("Circumference = %.2f\n", CIRCLE(radius));
    
    return 0;
}
