#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int res;
    int value = 25;
    // res = value++; //Primero asigna y luego resta.
    res = ++value; //Primero resta y luego asigna.
    printf("El valor de value es: %i\n", res);

    value = 25;
    // res = value--; //Primero asigna y luego resta.
    res = --value; //Primero se resta y luego asigna.
    printf("El valor de value es: %i\n", res);

    return 0;
}