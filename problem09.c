#include <stdio.h>
#include <math.h>

struct point {
    float x, y;
};

typedef struct point Point;

void input(Point *p1, Point *p2)
{
    printf("Enter Point 1: ");
    scanf("%f %f", &p1->x, &p1->y);

    printf("Enter Point 2: ");
    scanf("%f %f", &p2->x, &p2->y);
}

float distance(Point p1, Point p2)
{
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) +
                (p2.y - p1.y) * (p2.y - p1.y));
}

int main()
{
    Point p1, p2;
    float d;

    input(&p1, &p2);
    d = distance(p1, p2);

    printf("Distance = %.2f\n", d);

    return 0;
}
