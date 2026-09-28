#include <stdio.h>

int main()
{
    int a, b, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    remainder = a % b;

    printf("Remainder = %d\n", remainder);

    return 0;
}
