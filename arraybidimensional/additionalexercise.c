#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int values[3][3];

    // Inputs.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a value in file: %i and column: %i: ", i, j);
                scanf("%i", &values[i][j]);
        }
        printf("\n");
    }
    printf("Values ingresed!\n");

    // Outputs.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Value in: [%i][%i]: %i\n", i, j, values[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}