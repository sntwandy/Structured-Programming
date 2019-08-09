#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Globals-Variables
char name[];
float calification;

// Functions.
float calculate(float cali, char na[]){
    if(cali >= 7 && cali <= 10){
        printf("\n%s aproved!!! With a calification = %f;)\n", na, cali);
    } else if(cali >= 0 && cali < 7){
        printf("\n%s not aproved, I'm sorry! With a calification = %f :( \n", na, cali);
    } else{
        printf("\n\nERROR LAYER 8:\n\n");
        printf("Enter a valid calification, try again!! *_*\n");   
    }
    return 0;
}

// Main-Functions
int main(){
    // Variables.

    // Inputs.
    printf("\nWelcome!\n");
    printf("Please, enter the alumn name: ");
        scanf("%s", &name);
    printf("Please, now, enter the calification of %s = ", &name);
        scanf("%f", &calification);
    // Outputs.
    calculate(calification, name);
    printf("\nThanks to use our software.\n");
    printf("\nCreated by: @sntwandy\n");
    return 0;
}