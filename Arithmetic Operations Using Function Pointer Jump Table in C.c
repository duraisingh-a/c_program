#include <stdio.h>

typedef int (*operation_t)(int, int);

/* Arithmetic functions */
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b != 0)
        return a / b;
    else
        return 0;
}

/* Operation types */
typedef enum
{
    OP_ADD,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE
} op_type_t;

int main()
{
    /* Function pointer jump table */
    operation_t jump_table[] = {
        add,
        subtract,
        multiply,
        divide
    };

    op_type_t operation = OP_MULTIPLY;
    int a = 6;
    int b = 4;

    /* Execute selected operation */
    int result = jump_table[operation](a, b);

    printf("Result = %d\n", result);

    return 0;
}
