#include <stdio.h>

void input_string(char string[])
{
    printf("Enter a string: ");
    scanf("%s", string);
}

int find_length(char string[])
{
    int length = 0;

    while (string[length] != '\0')
    {
        length++;
    }

    return length;
}

void display(int length, char string[])
{
    printf("The length of %s is %d\n", string, length);
}

int main()
{
    char string[100];
    int length;

    input_string(string);
    length = find_length(string);
    display(length, string);

    return 0;
}
