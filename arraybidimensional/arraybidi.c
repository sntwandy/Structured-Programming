#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int array[3][4] = {{1,1,1,1}, {1,4,4,1}, {10, 10, 3, 3}};
    int sum[3] = {0,0,0};

    // Operations.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[i] += array[i][j];
        }
        
    }
    // Outputs.
    for (int i = 0; i < 3; i++)
    {
        printf("The value in %i position is: %i\n", i, sum[i]);
    }
    
    return 0;
}