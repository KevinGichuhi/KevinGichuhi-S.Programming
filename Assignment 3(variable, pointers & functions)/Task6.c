#include <stdio.h>

// Function that increments using pass by value
void incrementByValue(int num) {
    num = num + 1;
    printf("Inside incrementByValue: %d\n", num);
}

// Function that increments using pass by reference
void incrementByReference(int *ptr) {
    *ptr = *ptr + 1;
    printf("Inside incrementByReference: %d\n", *ptr);
}

int main() {
    int value = 5;
    
    printf("Initial value: %d\n\n", value);
    
    // Call pass by value function
    printf("--- Pass by Value ---\n");
    incrementByValue(value);
    printf("After incrementByValue: %d\n", value);
    printf("(Value unchanged - copy was modified)\n\n");
    
    // Call pass by reference function
    printf("--- Pass by Reference ---\n");
    incrementByReference(&value);
    printf("After incrementByReference: %d\n", value);
    printf("(Value changed - original was modified)\n");
    
    return 0;
}