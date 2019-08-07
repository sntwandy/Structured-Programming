#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Functions.
int potencia(int b, int e){
    int r ;
    for (int i = 0; i < e; i++)
    {     
       r += b * e; 
    }
    return r;
}

int main(){
    // Variables.
    int b = 0;
    int e = 0;

    // Inputs.
    printf("Enter base: \n");
        scanf("%i", &b);
    printf("Enter exponent: \n");    
        scanf("%i", &e);

    // Outputs.
    printf("The result is: %i\n", potencia(b,e));
    return 0;
}