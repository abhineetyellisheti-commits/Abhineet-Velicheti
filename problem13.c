
#include <stdio.h>

struct circle {
    float radius, area;
};

typedef struct circle Circle;

void input(int n, Circle c[n])
{
    for (int i = 0; i < n; i++) {
        printf("Enter radius of circle %d: ", i + 1);
        scanf("%f", &c[i].radius);
    }
}

void compute_area(int n, Circle c[n])
{
    for (int i = 0; i < n; i++) {
        c[i].area = 3.14 * c[i].radius * c[i].radius;
    }
}

float total_area(int n, Circle c[n])
{
    float total = 0;

    for (int i = 0; i < n; i++) {
        total += c[i].area;
    }

    return total;
}

int main()
{
    int n;

    printf("Enter the number of circles: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    Circle c[n];

    input(n, c);
    compute_area(n, c);

    for (int i = 0; i < n; i++) {
        printf("Circle %d: Radius = %.2f, Area = %.2f\n",
               i + 1, c[i].radius, c[i].area);
    }

    printf("Total area = %.2f\n", total_area(n, c));

    return 0;
}
