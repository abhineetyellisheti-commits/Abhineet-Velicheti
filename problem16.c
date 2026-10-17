#include <stdio.h>

struct fraction {
    int num, den;
};

typedef struct fraction Fraction;

Fraction input()
{
    Fraction f;

    printf("Enter numerator and denominator: ");
    scanf("%d%d", &f.num, &f.den);

    return f;
}

int find_gcd(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

Fraction add_fraction(Fraction f1, Fraction f2)
{
    Fraction result;

    result.num = f1.num * f2.den + f2.num * f1.den;
    result.den = f1.den * f2.den;

    int gcd = find_gcd(result.num, result.den);

    result.num = result.num / gcd;
    result.den = result.den / gcd;

    return result;
}

int main()
{
    int n;

    printf("Enter the number of fractions: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a number greater than 0.\n");
        return 1;
    }

    Fraction result = input();

    for (int i = 1; i < n; i++) {
        Fraction f = input();
        result = add_fraction(result, f);
    }

    printf("Sum = %d/%d\n", result.num, result.den);

    return 0;
}

