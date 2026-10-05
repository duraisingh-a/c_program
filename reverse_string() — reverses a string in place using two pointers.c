#include <stdio.h>

void reverse_string(char *str)
{
    if (str == NULL || *str == '\0')
        return;

    char *start = str;
    char *end = str;

    while (*end != '\0')
        end++;

    end--;

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main(void)
{
    char str[] = "HELLO";

    reverse_string(str);

    printf("Expected Output: \"%s\"\n", str);

    return 0;
}
