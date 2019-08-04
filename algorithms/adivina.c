/*MEJORAR LA PRECISIÓN */
//Números par e impar, eliminar los número para mejorar la presición del programa.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int num1;
    int num2;
    // Inputs.
    printf("Enter a num1: ");
        scanf("%i", &num1);
    printf("Enter a num2: ");
        scanf("%i", &num2);    
    // Outputs.
}
int adivina(n1, n2){
    if(n1 > n2){
        int aux = n1 - (n2 / 2);
        return printf("The num that you will think is around: %i\n", aux);
    } else if(n1 < n2){
        int aux = n2 - (n1 / 2);
        return printf("The num that you will think is around: %i\n", aux);
    }
}

