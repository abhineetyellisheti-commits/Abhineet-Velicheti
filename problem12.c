#include <stdio.h>

int main()
{
    float r1, r2, r3;
    float a1, a2, a3;
    float largest;

    printf("Enter radius of circle 1: ");
    scanf("%f", &r1);

    printf("Enter radius of circle 2: ");
    scanf("%f", &r2);

    printf("Enter radius of circle 3: ");
    scanf("%f", &r3);

    a1 = 3.14 * r1 * r1;
    a2 = 3.14 * r2 * r2;
    a3 = 3.14 * r3 * r3;

    largest = a1;

    if (a2 > largest)
        largest = a2;

    if (a3 > largest)
        largest = a3;

    printf("Largest area = %.2f\n", largest);

    return 0;
}
