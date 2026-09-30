#include <stdio.h>

typedef enum
{
    STAT_OK = 0,
    STAT_INVALID_POINTER,
    STAT_ZERO_COUNT
} StatStatus;

StatStatus array_statistics(const int *data,
                            int count,
                            int *min,
                            int *max,
                            float *average)
{
    int i;
    int sum = 0;

    /* Check invalid pointers */
    if (data == NULL || min == NULL || max == NULL || average == NULL)
    {
        return STAT_INVALID_POINTER;
    }

    /* Check count */
    if (count <= 0)
    {
        return STAT_ZERO_COUNT;
    }

    *min = data[0];
    *max = data[0];

    for (i = 0; i < count; i++)
    {
        if (data[i] < *min)
        {
            *min = data[i];
        }

        if (data[i] > *max)
        {
            *max = data[i];
        }

        sum += data[i];
    }

    *average = (float)sum / count;

    return STAT_OK;
}

int main()
{
    int data[] = {10, 20, 5, 40, 15};
    int min, max;
    float average;
    StatStatus status;

    status = array_statistics(data, 5, &min, &max, &average);

    if (status == STAT_OK)
    {
        printf("Minimum = %d\n", min);
        printf("Maximum = %d\n", max);
        printf("Average = %.2f\n", average);
    }
    else if (status == STAT_INVALID_POINTER)
    {
        printf("Error: Invalid pointer\n");
    }
    else if (status == STAT_ZERO_COUNT)
    {
        printf("Error: Count is zero or negative\n");
    }

    return 0;
}
