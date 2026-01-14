#include <stdio.h>
int main()
{
    int num, original;
    int rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // only for camparison (not a temp for logic)
    original = num;

    // Main logic for Palindrome number

    while (num != 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    if (rev == original)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not Palindrome number");
    }
    return 0;
}