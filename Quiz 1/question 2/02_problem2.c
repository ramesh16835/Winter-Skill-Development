#include <stdio.h>
#include <math.h>

int main()
{
    int n, result;

    for (n = 1; n <= 200; n++)
    {
        result = pow(n, 2);
        if (result > 200)
        {
            break; // Stop printing immediately
        }
        printf(" %d ", result);
    }

    return 0;
}
