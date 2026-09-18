//2. Write a C program to add two numbers.

#include <stdio.h>


void input(int *a, int *b)
{
    printf("Enter two numbers: ");
    scanf("%d %d", a, b);
}


int add(int a, int b)
{
    return a + b;
}


void display(int result)
{
    printf("Sum = %d\n", result);
}


int main()
{
    int a, b, result;

    input(&a, &b);
    result = add(a, b);
    display(result);

    return 0;
}
