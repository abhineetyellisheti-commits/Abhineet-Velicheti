#include <stdio.h>

void input(int *a, int *b, int *c)
{
    printf("Enter three numbers: ");
    scanf("%d %d %d", a, b, c);
}

int find_largest(int a, int b, int c)
{
    if(a > b && a > c)
        return a;
    else if(b > c)
        return b;
    else
        return c;
}

void output(int largest)
{
    printf("Largest = %d\n", largest);
}

int main()
{
    int a, b, c, largest;
    int n;

    printf("How many times to repeat: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        input(&a, &b, &c);

        largest = find_largest(a, b, c);

        output(largest);
    }

    return 0;
}
