#include <stdio.h>

int main()
{
    int data[5] = {10, 20, 5, 40, 15};
    int i, min, max, sum = 0;
    float average;

    min = data[0];
    max = data[0];

    for (i = 0; i < 5; i++)
    {
        if (data[i] < min)
            min = data[i];

        if (data[i] > max)
            max = data[i];

        sum = sum + data[i];
    }

    average = (float)sum / 5;

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    printf("Average = %.2f\n", average);

    return 0;
}
