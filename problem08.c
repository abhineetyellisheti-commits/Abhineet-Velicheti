#include <stdio.h>

struct point
{
    float x, y;
};

void input(struct point p[])
{
    for(int i = 0; i < 6; i++)
    {
        printf("Enter point %d: ", i + 1);
        scanf("%f %f", &p[i].x, &p[i].y);
    }
}

void output(struct point p[])
{
    printf("The points of the polygon are:\n");

    for(int i = 0; i < 6; i++)
    {
        printf("(%.2f, %.2f)\n", p[i].x, p[i].y);
    }
}

int main()
{
    struct point p[6];

    input(p);
    output(p);

    return 0;
}
