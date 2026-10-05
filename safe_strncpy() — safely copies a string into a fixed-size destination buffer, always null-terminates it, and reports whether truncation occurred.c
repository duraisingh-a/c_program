#include <stdio.h>
#include <stddef.h>

int safe_strncpy(char *dst, const char *src, size_t cap)
{
    if (cap == 0)
        return 1;

    size_t i = 0;

    while (i < cap - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';

    if (src[i] != '\0')
        return 1;   // Truncated

    return 0;       // Complete copy
}

int main(void)
{
    const char *src = "EMBEDDED";
    char dst[5];

    int truncated = safe_strncpy(dst, src, sizeof(dst));

    printf("Expected Output:\n");
    printf("dst = \"%s\"; return = %d (truncated)\n", dst, truncated);

    return 0;
}
