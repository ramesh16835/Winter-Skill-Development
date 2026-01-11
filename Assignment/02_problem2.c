#include <stdio.h>

int main()
{

    /* logic
      number is divisible by  1 weeks means 7  then print as it is
        otherwise print  rounded number
         Formula is ----> n+(7-(n%7))*/

    int i, rounded; // variable declaration
    int j = 7;

    printf(" Enter number: "); // input from user
    scanf("%d", &i);

    if (i % j == 0)
    {                // conditional statement
        rounded = i; // i divisible by j  then print i otherwise print rounded value
    }
    else
    {
        rounded = i + (j - (i % j)); // the rounded value is here

        printf(" Rounded value divisible by 7: %d\n", rounded);
    }
    return 0;
}