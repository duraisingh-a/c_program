#include <stdio.h>

int main()
{
    int readings[5], i;

    printf("Enter five readings:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &readings[i]);
    }

    printf("Reverse order:\n");

    for (i = 4; i >= 0; i--)
    {
        printf("%d\n", readings[i]);
    }

    return 0;
}
