#include <stdio.h>

// 1. Function Prototype (Declaration)
int add(int a, int b);

int main()
{
    int result;

    // 2. Function Call with Arguments
    result = add(10, 20);

    printf("Sum = %d\n", result);

    return 0;
}

// 3. Function Definition
int add(int a, int b)
{
    // a and b are Parameters
    return a + b;
}
