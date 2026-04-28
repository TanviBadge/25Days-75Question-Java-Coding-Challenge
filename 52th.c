#include <stdio.h>

enum Weekday {MON=1, TUE, WED, THU, FRI, SAT, SUN};

int main() {
    enum Weekday today = WED;
    
    printf("Day number: %d\n", today);
    
    if(today == WED)
        printf("It's Wednesday!\n");
    
    return 0;
}
