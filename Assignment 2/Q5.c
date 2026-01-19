#include <stdio.h>

int main()
{

    unsigned int num, digit;
    int rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;     // get last digit
        printf("%d ", digit); // print digit with space
        num = num / 10;       // remove last digit
    }
    return 0;
}