#include <stdio.h>

void convert(int num, int base, char result[])
{

    int i = 0, rem;
    char temp[50];

    while (num > 0)
    {
        rem = num % base;
        if (rem < 10)
        {
            temp[i++] = rem + '0';
        }
        else
        {
            temp[i++] = rem - 10 + 'A';
        }

        num = num / base;
    }
    // Reverse the result
    int j = 0;
    for (i = i - 1; i >= 0; i--)
        result[j++] = temp[i];

    result[j] = '\0';
}
int main()
{
    unsigned int num, base1, base2;
    char res1[50], res2[50];

    printf("Enter the number: ");
    scanf("%d %d %d", &num, &base1, &base2);

    convert(num, base1, res1);
    convert(num, base2, res2);

    printf("%d %d %s %d %s ", num, base1, res1, base2, res2);
    return 0;
}