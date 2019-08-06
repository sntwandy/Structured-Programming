#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int array[5], m;

    // Inputs.
    for (int i = 0; i < 5; i++)
        {
            printf("Enter the value: \n");
                scanf("%i", &array[i]);
        }

    // Operations.
    m = array[0] * array[1] * array[2] * array[3] * array[4];

    // Outputs.
    printf("\nThe result is: %i\n", m);

    return 0;
}