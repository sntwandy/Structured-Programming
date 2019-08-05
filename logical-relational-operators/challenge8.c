#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    float calification;
    // Inputs.
    printf("\nEnter the calification to evaluate the student: ");
        scanf("%f", &calification);

    // Operations.
    if(calification < 60 && calification > -1){
        printf("I'm sorry, failed student. :(\n");
    } else if(calification >= 60 && calification < 90){
        printf("Congrats, aproved student.\n");
    } else if(calification >= 90 && calification < 101){
        printf("¡Congratulations!, aproved student. ;)\n");
    } else {
        printf("I'm sorry, I can't read the calification, Check that the calification does not exceed between 0 and 100.\n");
    }
    return 0;
}