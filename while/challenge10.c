#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int num;
    int iterator = 1;
    // Inputs.
    printf("\nEnter a number to print: '#'");
        scanf("%i", &num);

    // Operations.
    if(num >= iterator){
        while (iterator <= num)
        {
            iterator++;
            printf("#\n");
        }
    }
    return 0;
}