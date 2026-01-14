#include <stdio.h>
int main()
{
    float num1, num2;
    char calcu;
    float result;

    printf("Enter two number: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter the character (+,-,*,/)");
    scanf(" %c", &calcu);

    // main logic of Calculator
    switch (calcu)
    {
    case '+':

        // Addition Operation
        result = num1 + num2;
        printf("%0.2f", result);
        break;
    // Substruction Operation
    case '-':
        result = num1 - num2;
        printf("%0.2f", result);
        break;

        // Multiplication Operation
    case '*':
        result = num1 * num2;
        printf("%0.2f", result);
        break;

        // Division Operation
    case '/':
        if (num2 != 0)
        {
            printf("%0.2f", num1 / num2);
        }
        else
        {
            printf("Error: division by zero");
        }
        break;

        // Default Case
    default:
        printf("Invalid operator");
    }
    return 0;
}