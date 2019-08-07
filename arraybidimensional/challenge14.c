#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int values[5][6], error = 0 ,aux;

    // Inputs.
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Enter calificaction: [%i][%i] = ", i, j);
                scanf("%i", &values[i][j]);
                    if(values[i][j] >= 6 && values[i][j] <= 10 && j != 5){
                        printf("Succesfull!\n");
                    } else if(values[i][j] > -1 || values[i][j] < 11){
                        if(j == 5){
                            if (values[i][j] == 0){
                                printf("Succesfull!\n");
                            } else if (values[i][j] != 0){
                                printf("\nERROR LAYER 8:\n");
                                error = 1;
                                printf("\nI'm sorry, the last calification in: [%i][%i] it should always be: 0!\n", i, j);
                                printf("Try again. :(\n");
                                j = 6;
                                i = 5;    
                            }
                        } else{
                            printf("\nERROR LAYER 8:\n");
                            error = 1;
                            printf("\nThe number in: [%i][%i] is = %i\n", i, j, values[i][j]);
                            printf("The number should be >= 6 and <= 10. :)\n");
                            j = 6;
                            i = 5;   
                        }
                    }
        }
        printf("\n");
        
    }

    // Operations and Outputs.
    if(error != 1){
        for (int i = 0; i < 5; i++){
            aux = 0;
            for (int j = 0; j < 6; j++){
                if(j != 5){
                    aux += values[i][j];
                } else {
                    aux = aux / 5;
                    values[i][j] = aux;
                    printf("The average to element in: [%i][%i] is = %i", i, j, values[i][j]);
                }
            }
            printf("\n");
        }
    }

    // Outputs the Average.
    printf("\n");
    printf("AVERAGE:");
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            aux += values[i][j];
            if(j == 5){
                aux = aux / 6;
                printf("The average of file: [%i] is = %i", i, aux);
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("Created by: @sntwandy\n");
    return 0;
}