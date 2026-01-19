#include <stdio.h>

int main()
{
    unsigned int num, digit;
    unsigned int rev = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Reverse the number

    while (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }

    // Print digits in word

    while (rev > 0)
    {
        digit = rev % 10;

        switch (digit)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
        rev = rev / 10;
    }
    return 0;
}