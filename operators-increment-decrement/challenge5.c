#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int num;

    // Inputs.
    printf("Enter a number: ");
        scanf("%i", &num);

    // Operations. 
    num %= 5;
    num++;
    // Outputs.
    printf("The final result is: %i\n", num);
    return 0;
}