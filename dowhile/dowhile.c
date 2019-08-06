#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int value1 = 0;
    // Operations.
    do
    {
        printf("The value is: %i\n", value1);
        value1++;
    } while (value1 != 101);
    printf("Finished!\n");
    return 0;
}