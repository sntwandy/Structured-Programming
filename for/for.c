#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int n1 = 1, n2 = 1, aux = 0;

    // Operations.
    for (int i = 0; i < 9; i++)
    {
         aux = n1 + n2;
         n1 = n2;
         n2 = aux;
        printf("%i\n", n1);
        
    }
    return 0;
}