#include <stdio.h>
#include <math.h>

struct point
{
    float x, y;
};

float distance(struct point p1, struct point p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x)
              + (p1.y - p2.y) * (p1.y - p2.y));
}

int main()
{
    struct point p1, p2;
    float d;

    printf("Enter x and y of first point: ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter x and y of second point: ");
    scanf("%f %f", &p2.x, &p2.y);

    d = distance(p1, p2);

    printf("Distance = %f\n", d);

    return 0;
}
