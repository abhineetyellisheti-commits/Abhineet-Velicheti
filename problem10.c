#include <stdio.h>

int main()
{
    char name[] = "Abhineet";
    int age = 18;
    float height = 175.0;
    float weight = 69.0;
    char place[] = "Bengaluru";

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f cm\n", height);
    printf("Weight: %.1f kg\n", weight);
    printf("Place of birth: %s\n", place);

    return 0;
}
