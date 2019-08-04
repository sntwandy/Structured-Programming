#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int sum, module;
    float subtraction, multiplication, division;

    // Operations.
    sum = 10 + 10;
    subtraction = 20.5 - 10;
    multiplication = 10 * 10.2;
    division = 20 / 5;
    module = 10 % 4;

    // Outputs.
    printf("Sum operations is: %i\n", sum);
    printf("Subtraction operation is: %f\n", subtraction);
    printf("Multiplication operation is: %f\n", multiplication);
    printf("Division operation is: %f\n", division);
    printf("Module operation is: %i\n", module); 
}