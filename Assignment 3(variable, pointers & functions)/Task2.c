#include <stdio.h>

int main() {
    // Declare integer variable named num with value 10
    int num = 10;
    
    // Declare integer pointer named ptr
    int *ptr;
    
    // Store the address of num in the pointer ptr
    ptr = &num;
    
    // Print the required values
    printf("Value of num: %d\n", num);
    printf("Value stored in ptr (address of num): %p\n", ptr);
    printf("Address of num: %p\n", &num);
    printf("Value accessed using *ptr: %d\n", *ptr);
    
    return 0;
}