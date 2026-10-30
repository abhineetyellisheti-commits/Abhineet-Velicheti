#include <stdio.h>
#include <stdlib.h>

struct object
{
    int type;
    void *shape;
};

typedef struct object Object;

struct circle
{
    int type;
    float radius, area;
};

typedef struct circle Circle;

struct rectangle
{
    int type;
    float length, breadth, area;
};

typedef struct rectangle Rectangle;

struct triangle
{
    int type;
    float base, altitude;
};

typedef struct triangle Triangle;

Object input_shape()
{
    int n;
    Object O;

    printf("Enter the shape: 0 - Circle, 1 - Rectangle, 2 - Triangle: ");
    scanf("%d", &n);

    if(n == 0)
    {
        Circle *c;
        c = malloc(sizeof(Circle));

        c->type = 0;

        printf("Enter the radius of the circle: ");
        scanf("%f", &c->radius);

        O.type = c->type;
        O.shape = c;
    }
    else if(n == 1)
    {
        Rectangle *r;
        r = malloc(sizeof(Rectangle));

        r->type = 1;

        printf("Enter the length and breadth of the rectangle: ");
        scanf("%f%f", &r->length, &r->breadth);

        O.type = r->type;
        O.shape = r;
    }
    else if(n == 2)
    {
        Triangle *t;
        t = malloc(sizeof(Triangle));

        t->type = 2;

        printf("Enter the base and altitude of the triangle: ");
        scanf("%f%f", &t->base, &t->altitude);

        O.type = t->type;
        O.shape = t;
    }
    else
    {
        O.type = -1;
        O.shape = NULL;
    }

    return O;
}

void output_shape(Object O)
{
    if(O.type == 0)
    {
        printf("Circle with radius %f\n",
               ((Circle *)O.shape)->radius);
    }
    else if(O.type == 1)
    {
        printf("Rectangle with length and breadth %f and %f\n",
               ((Rectangle *)O.shape)->length,
               ((Rectangle *)O.shape)->breadth);
    }
    else if(O.type == 2)
    {
        printf("Triangle with base and altitude %f and %f\n",
               ((Triangle *)O.shape)->base,
               ((Triangle *)O.shape)->altitude);
    }
    else
    {
        printf("Invalid shape selection\n");
    }
}

int main()
{
    Object O;

    O = input_shape();

    output_shape(O);

    free(O.shape);

    return 0;
}
