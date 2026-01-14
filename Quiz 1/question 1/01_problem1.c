#include <stdio.h>
 int main(){
    int n, a, b;
    int x,y,GCD, LCM, result;

    printf("Enter n, a, b: ");
    scanf("%d %d %d", &n, &a, &b);

    // step1: find GCD

    x = a;
    y = b;

    while(y != 0){
        int r = x%y;
        x = y;
        y = r;  
    }
    GCD = x;
     
    // Step 2: Find LCM

    LCM = (a*b)/GCD;

    // Step 3: Find Smallest number >= n divisible by LCM

  result = n;
   while (result%LCM != 0) 
   {
    result++;

   }
   printf("Required number = %d", result);
   return 0;
 }