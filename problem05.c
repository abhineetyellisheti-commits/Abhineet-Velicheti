#include <stdio.h>

int get_n()
{
    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    return n;
}

void get_numbers(int n, int numbers[n])
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
}

int find_sum(int n, int numbers[n])
{
    int total = 0;

    for(int i = 0; i < n; i++)
    {
        total = total + numbers[i];
    }

    return total;
}

void display(int n, int numbers[n], int total)
{
    for(int i = 0; i < n - 1; i++)
    {
        printf("%d + ", numbers[i]);
    }

    printf("%d = %d", numbers[n - 1], total);
}

int main()
{
    int n;
    int total;

    n = get_n();

    int numbers[n];

    get_numbers(n, numbers);

    total = find_sum(n, numbers);

    display(n, numbers, total);

    return 0;
}

