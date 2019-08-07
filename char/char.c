#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    char value[30];
    int n = 0;

    // Inputs.
    printf("Enter a phrase: \n");
        gets(value);
        n = strlen(value);

    // Operations and Outputs..
    for (int i = n; i >= 0; i--)
    {
        printf("%c", value[i]);
    }
    printf("\n");
    return 0;
}