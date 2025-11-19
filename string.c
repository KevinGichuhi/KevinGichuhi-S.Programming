#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;
    int i;

    printf("String Length Program\n");
    printf("=====================\n\n");

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\nYour string: %s\n", str);

    // Count length manually using a loop
    len = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    printf("Length of string: %d\n", len);

    printf("\n");

    return 0;
}