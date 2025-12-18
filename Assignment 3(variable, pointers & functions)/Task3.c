#include <stdio.h>

int main() {
    // Declare integer variable named count with value 10
    int count = 10;
    printf("Initial value of count: %d\n", count);
    
    // Declare integer pointer named pCount
    int *pCount;
    
    // Assign the address of count to pCount
    pCount = &count;
    printf("Address of count: %p\n", pCount);
    
    // Modify the value of count using pointer pCount
    *pCount = 25;
    
    // Print the updated value of count
    printf("Updated value of count: %d\n", count);
    printf("Value via pointer *pCount: %d\n", *pCount);
    
    return 0;
}