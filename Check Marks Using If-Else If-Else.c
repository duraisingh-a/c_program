#include <stdio.h>

int main()
{
    int a;

    printf("Enter your marks: ");
    scanf("%d", &a);

    if (a == 100)
    {
        printf("Your mark is %d, Very Good Mark\n", a);
    }
    else if (a == 60)
    {
        printf("Your mark is %d, Good Mark\n", a);
    }
    else
    {
        printf("Your mark is %d, Low Mark\n", a);
    }

    return 0;
}
