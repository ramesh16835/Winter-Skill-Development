#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main (){
    srand(time(0));  // initialize the random generator 

  int player, computer = rand()%3;

  /* 0--> snaks
     1--> water 
     2--> gun
   */  

   printf( "choise 0 for snaks, 1 for water, 2 for gun  \n ");
   scanf ("%d",&player );
   printf(" computer choose %d \n ", computer );

   if(player == 0 && computer == 0 ){
    printf("it's draw \n");

   } else if (player ==0 && computer == 1){
     printf("you win!\n");
   } 
   else if (player ==0 && computer == 2){
     printf("you loose! \n");
   }

    else if (player ==1 && computer == 0){
         printf("you loose! \n");
        
   } 
   else if (player ==1 && computer == 1){
     printf("it's draw \n");
   }
    else if (player ==1 && computer == 2){
         printf("you win!\n");
        
   }
    else if (player ==2 && computer == 0){
         printf("you win!\n");
   }
    else if (player ==2 && computer == 1){
         printf("you loose!\n");
   } 
   else if (player ==2 && computer == 2){
     printf("it's draw \n");
   } 
   else {
    printf("something went wrong!");

   }
   return 0 ;  // this is the final success run code 

}
