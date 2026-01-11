#include <stdio.h>
int main()
{
    int age;
    int madeInIndia;  // 1= Yes, 0 = No
    int accidentGood; // 1 = Good, 0 = Not Good
    float carValue;
    float premium = 0;
    int excess = 0;

    printf("Enter age of driver : ");
    scanf("%d", &age);
    printf("\n");

    printf("Enter car value : ");
    scanf("%f", &carValue);
    printf("\n");

    printf("Car manufactured in India? (1= Yes , 0 = No) : ");
    scanf("%d", &madeInIndia);
    printf("\n");

    printf("Accident record good? (1 = Good , 0 = no): ");
    scanf("%d", &accidentGood);
    printf("\n");

    printf("-----Insurance Details -----\n");

    if (age >= 25)
    {
        if (madeInIndia == 1)
        {
            if (accidentGood == 1)
            {
                premium = 0.06 * carValue;
                printf("Policy Type: Comprehensive \n");
                excess = 0;
            }
            else
            {
                premium = 0.07 * carValue;
                printf("Policy Type: Comprehensive \n");
                excess = 100;
            }
        }
        else
        {
            // Not made in India
            if (accidentGood == 1)
            {
                premium = 0.06 * carValue;
                printf("Policy Type: Comprehensive \n");
                excess = 100;
            }
            else
            {
                premium = 0.07 * carValue;
                printf("Policy Type: Third Party \n");
                excess = 0;
            }
        }
    }
    else
    {
        // Age <25
        if (madeInIndia == 1)
        {
            if (accidentGood == 1)
            {
                premium = 0.06 * carValue;
                printf("Policy Type: Comprehensive \n");
                excess = 100;
            }
            else
            {
                printf(" No policy can be issued.\n");
                return 0;
            }
        }
    }
    printf("Premium  Amount: Rs %0.2f\n", premium);
    if (excess > 0)
    {

        printf("Excess Payable: Rs %d \n", excess);
    }
    else
    {
        printf("Excess Payable: None\n");
    }
    return 0;
}