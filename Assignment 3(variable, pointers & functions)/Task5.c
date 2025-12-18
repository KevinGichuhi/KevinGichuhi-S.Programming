#include <stdio.h>

// Function to swap two numbers using pointers
void swapNumbers(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // Declare two integer variables
    int a = 10;
    int b = 20;
    
    // Print values before swapping
    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    // Call swapNumbers() by passing addresses of a and b
    swapNumbers(&a, &b);
    
    // Print values after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}