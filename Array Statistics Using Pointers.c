#include <stdio.h>
#include <stddef.h>

int array_stats(const int *arr, size_t n,
                int *out_min, int *out_max,
                long *out_sum)
{
    if (arr == NULL || n == 0 ||
        out_min == NULL || out_max == NULL ||
        out_sum == NULL)
    {
        return -1;
    }

    const int *ptr = arr;

    *out_min = *ptr;
    *out_max = *ptr;
    *out_sum = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (*ptr < *out_min)
            *out_min = *ptr;

        if (*ptr > *out_max)
            *out_max = *ptr;

        *out_sum += *ptr;
        ptr++;
    }

    return 0;
}

int main()
{
    int arr[] = {10, 20, 5, 40, 15};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    int min, max;
    long sum;

    if (array_stats(arr, n, &min, &max, &sum) == 0)
    {
        printf("Minimum = %d\n", min);
        printf("Maximum = %d\n", max);
        printf("Sum = %ld\n", sum);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}
