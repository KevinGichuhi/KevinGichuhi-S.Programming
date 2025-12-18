#include <stdio.h>

int main() {
    // Declare two integer variables
    int num1 = 15;
    int num2 = 25;
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    
    // Declare two integer pointers
    int *ptr1;
    int *ptr2;
    
    // Assign address of num1 to ptr1
    ptr1 = &num1;
    
    // Assign address of num2 to ptr2
    ptr2 = &num2;
    
    // Add values using pointer dereferencing
    int sum = *ptr1 + *ptr2;
    
    // Print the result
    printf("Sum: %d\n", sum);
    
    return 0;
}