#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// Each changes need to compile.
int main(){
    int integerValue; 
    float floatValue;
    char letter = 'M';
    // double doubleValue = 5.10;
    // bool booleanValue = false;

    // Inputs.
    printf("Enter Integer value: "); //Integer.
        scanf("%i", &integerValue); //We use '&' to indicate the place to save the info (variable).
    printf("Enter Float value: "); //Float.
        scanf("%f", &floatValue);
    printf("Enter Char value: "); //Char.
        scanf(" %c", &letter);

    // Outputs.
    printf("\nInteger variable value is: %i\n", integerValue);
    printf("Float variable value is: %f\n", floatValue);
    printf("Char variable value is: %c\n", letter);
    // printf("Double variable value is: %f\n", doubleValue);
    return 0;
}