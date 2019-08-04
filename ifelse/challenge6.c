#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int n = 5;
    int u;

    // Inputs.
    printf("Welcome to Challenge 6 enter a num between 1 to 10.\n");
    printf("Enter a num: ");
        scanf("%i", &u);

    //Operations. 
    if(n == u){
        printf("¡Congratulations!");
    } else if(u > 10  || u < 1){
        printf("I'm sorry, the num is invalid. :(\n");
    } else {
        printf("¡You lose, try again!");
    }

    return 0;
}