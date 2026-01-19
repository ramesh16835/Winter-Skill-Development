#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int num, temp, i, divisor, digit;
    int digits = 0; // initialize  the variable

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // store original number 

    // Count number of digits
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }
    divisor = pow(10, digits - 1);

    // Extract digits from most significant
    for (i = 1; i <= digits; i++)
    {
        digit = num / divisor;  // Remove Printed digit
        printf("Digit %d : %d\n", i, digit);

        num = num % divisor;
        divisor /= 10;  // Reduce Divisor
    }
    return 0;
}