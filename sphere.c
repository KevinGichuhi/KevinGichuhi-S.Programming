#include <stdio.h>

int main()
{
    float radius;
    float surface_area;
    float pi;

    pi = 3.14159;

    printf("Sphere Surface Area Calculator\n");
    printf("===============================\n\n");

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    surface_area = 4 * pi * radius * radius;

    printf("\nRadius: %.2f\n", radius);
    printf("Surface Area: %.2f square units\n", surface_area);

    printf("\n");

    return 0;
}