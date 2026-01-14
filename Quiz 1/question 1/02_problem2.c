#include <stdio.h>
#include <math.h>

int main()
{
    float roots1, roots2;
    int a, b, c;

    printf("Enter a value a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Quadratic Equation

    printf("Equation : %dx^2 + %dx + %d \n", a, b, c);
    printf("\n");

    // Sridharacharya formula

    roots1 = ((-b) + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    roots2 = ((-b) - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    if (roots1 != roots2)
    {
        printf("Two distinct real roots \n");
        printf("\n");
    }
    else if (roots1 == roots2)
    {
        printf("Equal roots \n");
        printf("\n");
    }
    else
    {
        printf("Complex roots \n");
        printf("\n");
    }
    printf("roots1 = %0.4f \n\nroots2 = %0.4f \n", roots1, roots2);
    return 0;
}
