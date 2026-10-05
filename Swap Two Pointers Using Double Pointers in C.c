#include <stdio.h>

void swap_pointers(int **p1, int **p2)
{
    int *temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void)
{
    int a = 10, b = 20;

    int *ptrA = &a;
    int *ptrB = &b;

    swap_pointers(&ptrA, &ptrB);

    printf("Expected Output:\n");
    printf("after swap, a -> %d, b -> %d\n", *ptrA, *ptrB);

    return 0;
}
