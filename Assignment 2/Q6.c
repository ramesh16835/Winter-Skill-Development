#include <stdio.h>
int main()
{
    unsigned int num, temp, digit;
    int rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // store original number
    while (num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if (temp == rev)
    {
        printf("Palindrome \n");
    }
    else
    {
        printf("Not Palindrome \n");
    }
    return 0;
}