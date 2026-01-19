#include <stdio.h>
int main()
{
    unsigned int num, base;
    char result[50];
    int i = 0, rem;

    printf("Enter a Number: \n");
    scanf("%d %d", &num, &base);
    while (num > 0)
    {
        rem = num % base;

        if (rem < 10)
        {
            result[i++] = rem + '0';
        }
        else
        {
            result[i++] = rem - 10 + 'A';
        }
        num = num / base;
    }
    // Print in reverse order
    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", result[i]);
    }
    return 0;
}