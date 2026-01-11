#include <stdio.h>

int main(){

    /* ****Fahrenheit Covert into Celsius**** */
    /* Formula = ((f-32)*5.0)/9.0*/
    
     float fahrenheit;  // variable declaration 

     printf("Enter the value in Fahrenheit : ");  // input from user 
     scanf("%f",&fahrenheit );

     printf("The value in Celsius = %0.3f", (fahrenheit-32)*5.0/9.0);  // output 
    return 0;
}