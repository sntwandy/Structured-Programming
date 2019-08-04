#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // variables.
    float fahrenheit, celsius;
    
    // Inputs.
    printf("Convert Fahrenheit to Celsius!\n");
    printf("\nEnter Fahrenheit value: ");
        scanf("%f", &fahrenheit);

    // Operations.
    celsius = (fahrenheit - 32) / 1.8; 

    // Outputs.
    printf("\nCelsius temperature is: %f", celsius);

    return 0;
}