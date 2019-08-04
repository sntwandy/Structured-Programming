#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int value1;
    int value2;

    // Inputs.
    printf("Interchanges values between variables!\n\n");
    printf("Enter value1 data: ");
        scanf("%i", &value1);
    printf("Enter value2 data: ");
        scanf("%i" , &value2);

    // Outputs. (Function).
    interchanges(value1,value2);
}
// Function to Interchanges values between variables.
int interchanges(int a, int b){
    int aux = a;
    a = b;
    b = aux;
    return printf("\nThe value1 data now is: %i\nThe value2 data now is: %i\n", a, b); 
}