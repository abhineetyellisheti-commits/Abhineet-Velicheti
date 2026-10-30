#include <stdio.h>
struct triangle {
    float base, altitude, area;
};

typedef struct triangle Triangle;

void *input()
{
    Triangle *t = malloc(sizeof(Triangle));
    printf("Enter base and altitude of a triangle: ");
    scanf("%f%f",&t->base, &t->altitude);
    return t;
}


void output(Triangle t)
{
    printf("the base and altitude of the triangle are %f %f",
            t.base,t.altitude);
}



int main()
{
    void *t;
    t=input();
    Triangle *tptr = (Triangle *)t;
    output(*(Triangle *)t);      
}
