#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int number, guess, nguesses = 1 ;
    srand(time(0));
    number = rand()%100 + 1;    // generate random numbers between 1 to 100

    printf("the number is %d\n", number);  // its better to make this line a comment bc the ans number for this game us seen for this line .
    // keep running the loop  until the number is guessed .
     
    do{
       printf("guess a number in 1 to 100\n");      
       scanf("%d",& guess);

       if (guess>number){
          printf("lower please\n");     

                                       
        }                               
 
     else if (guess<number){                                            // jodi dubar run kori code ta tahole kivabe jani na ata infinity loop create kor6ee 

         printf("higher please\n");

        }
                                         

else{

    printf("you do it in %d attempts\n", nguesses);

}

  nguesses++;
  
    }while(guess!=number);
    
    
        return 0;

    }


