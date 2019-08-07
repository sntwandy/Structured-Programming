#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// Functions.
float divisasDollard(float priceDolar, float dom){
    int r;
    return r = dom / priceDolar;
}

float divisasDom(float priceDolar, float usd){
    int r;
    return r = usd * priceDolar;
}

int main(){
    // Variables.
    int answ = 0;
    float dom = 0, usd = 0, priceDollard = 0;
    // Inputs.
    printf("What do you want to do?\n");
    printf("1- USD to DOM\n");
    printf("2- DOM to USD\n");    
        scanf("%i", &answ);
    // Outputs.
    if(answ == 1){
        printf("Enter price dollard: ");
            scanf("%f", &priceDollard);
        printf("Enter the amount in dollard: ");
            scanf("%f", &usd);
            printf("The amount now is: %f DOM\n", divisasDom(priceDollard, usd));
    } else if(answ == 2){
        printf("Enter the price Dollard: ");
            scanf("%f", &priceDollard);
        printf("Enter the amount in DOM: ");
            scanf("%f", &dom);
            printf("The amount now is: %f USD\n", divisasDollard(priceDollard, dom));    
    } else{
        printf("ERROR LAYER 8:\n\n");
        printf("I'm sorry, you wrote a wrong option, try again. :(\n");
    }
    printf("\nCreated by: @sntwandy\n");
    return 0;
}