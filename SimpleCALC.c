#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Simple Calculator\n");
    printf("=================\n\n");
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("\n");
    
    // Addition
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    
    // Subtraction
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    
    // Multiplication
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    
    // Division
    printf("Division: %d / %d = %d\n", num1, num2, num1 / num2);
    
    // Modulus
    printf("Modulus: %d %% %d = %d\n", num1, num2, num1 % num2);
    
    printf("\n");
    
    return 0;
}