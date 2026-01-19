#include <stdio.h>
int main(){
    unsigned int num1 , num2, d;
    int arr1[10]= {0};
    int arr2[10]= {0};

    printf("Enter a number: \n");
    scanf ("%d %d", &num1, &num2);

    // store digits of firts number 
    while (num1 > 0)
    {
        d = num1 % 10 ;
        arr1[d] = 1;
        num1 /= 10;
    }

    // Check digit of second number
    while (num2 > 0)
    {
        d = num2 % 10;
        if (arr1[d] == 1 && arr2[d] == 0)
        {
            printf("%d ", d);
            arr2[d] = 1;
     
        }
         num2 /= 10;

    }
    return 0;


}