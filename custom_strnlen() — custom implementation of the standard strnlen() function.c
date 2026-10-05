#include <stdio.h>
#include <stddef.h>

size_t custom_strnlen(const char *str, size_t max_cap)
{
    size_t length = 0;

    while (length < max_cap && str[length] != '\0')
    {
        length++;
    }

    return length;
}

int main(void)
{
    const char *str = "EMBEDDED";
    size_t max_cap = 20;

    printf("Expected Output: %zu\n", custom_strnlen(str, max_cap));

    return 0;
}
