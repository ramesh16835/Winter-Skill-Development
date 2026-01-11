#include <stdio.h>
int main(){
    int r, x,y;  // variable declaration 

    int count =  0; //  store the value of integer
    
    printf("Enter radius: ");
    scanf("%d", &r); // 

    for (x= -r; x<=r; x++){
        for (y= -r;y<=r; y++ ){
            if (x*x+y*y<=r*r){
                count++;
            }

        }
    }
    printf("Number of integer coordinate points inside circle = %d\n", count );
return 0;

}