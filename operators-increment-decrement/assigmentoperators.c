#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int value= 11;

    // Operations and Outputs.
    printf("\nValue is: %i", value);
        value += 1;
    printf("\nValue is: %i", value);
        value -= 2;
    printf("\nValue is: %i", value);
        value *= 5;
    printf("\nValue is: %i", value);
        value /= 4;
    printf("\nValue is: %i", value);
        value %= 6;
    printf("\nValue is: %i", value);

    return 0;
}