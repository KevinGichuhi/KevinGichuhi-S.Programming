#include <stdio.h>
#include <stdlib.h>

// 1. Normal Variable vs Pointer
void demo1() {
    printf("\n--- Normal Variable vs Pointer ---\n");
    int x = 25;
    int *ptr = &x;
    
    printf("Variable x = %d\n", x);
    printf("Address of x = %p\n", (void*)&x);
    printf("Pointer ptr = %p\n", ptr);
    printf("Value via *ptr = %d\n\n", *ptr);
}

// 2. & and * Operators
void demo2() {
    printf("\n--- & and * Operators ---\n");
    int num = 50;
    int *p = &num;
    
    printf("& operator: &num = %p\n", (void*)&num);
    printf("* operator: *p = %d\n\n", *p);
}

// 3. Dereferencing
void demo3() {
    printf("\n--- Dereferencing ---\n");
    int val = 100;
    int *ptr = &val;
    
    printf("Before: val = %d\n", val);
    *ptr = 200;  // Modify using pointer
    printf("After *ptr = 200: val = %d\n\n", val);
}

// 4. Dynamic Memory
void demo4() {
    printf("\n--- Dynamic Memory Allocation ---\n");
    int *arr = (int *)malloc(3 * sizeof(int));
    
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    
    printf("Array: %d %d %d\n", arr[0], arr[1], arr[2]);
    free(arr);
    printf("Memory freed\n\n");
}

// 5. Call by Value
void change_byvalue(int x) {
    x = 999;
}

void demo5() {
    printf("\n--- Call by Value ---\n");
    int num = 10;
    printf("Before: num = %d\n", num);
    change_byvalue(num);
    printf("After: num = %d (unchanged)\n\n", num);
}

// 6. Call by Reference
void change_byref(int *x) {
    *x = 999;
}

void demo6() {
    printf("\n--- Call by Reference ---\n");
    int num = 10;
    printf("Before: num = %d\n", num);
    change_byref(&num);
    printf("After: num = %d (changed)\n\n", num);
}

// 7. Swap
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void demo7() {
    printf("\n--- Swap Function ---\n");
    int x = 5, y = 10;
    printf("Before: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After: x = %d, y = %d\n\n", x, y);
}

// 8. Multiple Returns
void divide(int a, int b, int *q, int *r) {
    *q = a / b;
    *r = a % b;
}

void demo8() {
    printf("\n--- Multiple Return Values ---\n");
    int quotient, remainder;
    divide(17, 5, &quotient, &remainder);
    printf("17 / 5 = %d remainder %d\n\n", quotient, remainder);
}

// 9. Arrays and Pointers
void demo9() {
    printf("\n--- Arrays and Pointers ---\n");
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    
    printf("arr[0] = %d, *ptr = %d\n", arr[0], *ptr);
    printf("arr[2] = %d, *(ptr+2) = %d\n\n", arr[2], *(ptr + 2));
}

// 10. Risks
void demo10() {
    printf("\n--- Pointer Risks ---\n");
    printf("1. NULL Pointer: int *ptr = NULL;\n");
    printf("2. Memory Leak: free(ptr);\n");
    printf("3. Dangling: Don't use pointers after free()\n");
    printf("4. Uninitialized: Always initialize pointers\n\n");
}

// 11. Structures
struct Person {
    int age;
    char name[20];
};

void demo11() {
    printf("\n--- Structures with Pointers ---\n");
    struct Person p = {25, "Alice"};
    struct Person *ptr = &p;
    
    printf("Name: %s, Age: %d\n", ptr->name, ptr->age);
    ptr->age = 26;
    printf("Updated Age: %d\n\n", p.age);
}

// 12. Pointer to Pointer
void demo12() {
    printf("\n--- Pointer to Pointer ---\n");
    int x = 100;
    int *ptr = &x;
    int **pptr = &ptr;
    
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    printf("**pptr = %d\n\n", **pptr);
}

// Main
int main() {
    int choice;
    
    while (1) {
        printf("\n=== POINTER CONCEPTS ===\n");
        printf("1. Normal Variable vs Pointer\n");
        printf("2. & and * Operators\n");
        printf("3. Dereferencing\n");
        printf("4. Dynamic Memory\n");
        printf("5. Call by Value\n");
        printf("6. Call by Reference\n");
        printf("7. Swap Function\n");
        printf("8. Multiple Returns\n");
        printf("9. Arrays and Pointers\n");
        printf("10. Pointer Risks\n");
        printf("11. Structures\n");
        printf("12. Pointer to Pointer\n");
        printf("0. Exit\n");
        printf("Choice: ");
        
        scanf("%d", &choice);
        getchar();
        
        switch (choice) {
            case 1: demo1(); break;
            case 2: demo2(); break;
            case 3: demo3(); break;
            case 4: demo4(); break;
            case 5: demo5(); break;
            case 6: demo6(); break;
            case 7: demo7(); break;
            case 8: demo8(); break;
            case 9: demo9(); break;
            case 10: demo10(); break;
            case 11: demo11(); break;
            case 12: demo12(); break;
            case 0: return 0;
            default: printf("Invalid choice\n");
        }
        
        printf("Press ENTER...");
        getchar();
    }
}