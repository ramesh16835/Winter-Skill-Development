#include <stdio.h>

int main()
{
    unsigned int num, temp, digit;
    int count = 0, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    temp = num; // Store Original number

    // Special case for 0
    if (num == 0)
    {
        count = 1;
        sum = 0;
    }
    else
    {
        while (num != 0)
        {
            digit = num % 10;  // get last digit
            sum = sum + digit; //  add digit to sum
            count++;           // increase digit count
            num = num / 10;    // remove last digit
        }
    }

    printf("Number of digits = %d \n", count);

    printf("Sum of digits = %d ", sum);
    return 0;
}