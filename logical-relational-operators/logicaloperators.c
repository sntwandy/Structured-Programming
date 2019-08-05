#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    float val1;
    float val2;

    // Inputs.
    printf("Enter a first nun: ");
        scanf("%f", &val1);
    printf("\nEnter a second num: ");
        scanf("%f", &val2);

    // Operations.
    if(val1 > val2){
        printf("The first num is greater: %f", val1);
    } else if (val1 < val2){
        printf("The second num is greater: %f", val2);
    } else {
        printf("The nums probably are equal: %f, %f", val1, val2);
    }
    return 0;
}