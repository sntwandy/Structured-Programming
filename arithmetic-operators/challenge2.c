#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables and Constants.
    const float pi = 3.1416; //My constan PI.
    float radio, height, area, volume;

    // Inputs.
    printf("Calculate the surface area of a cylinder\n");
    printf("\nEnter the radio of the base value: ");
        scanf("%f", &radio);
    printf("Enter the height value: ");
        scanf(" %f", &height);    

    // Operations.
    area = pi * (radio * radio); //Area.
    volume = area * height;  //Volum.

    // Outputs.
    printf("\nThe area of the base is: %f\n", area);
    printf("The Cylinder Volum is: %f\n", volume);

    return 0;
}