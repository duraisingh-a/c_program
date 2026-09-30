#include <stdio.h>

int main()
{
    float a, b, c, d;

    printf("Enter first sensor reading: ");
    scanf("%f", &a);

    printf("Enter second sensor reading: ");
    scanf("%f", &b);

    printf("Enter third sensor reading: ");
    scanf("%f", &c);

    d = (a + b + c) / 3;

    printf("Average of the sensor readings: %.2f\n", d);

    return 0;
}
