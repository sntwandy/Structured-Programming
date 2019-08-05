#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Variables.
    int n;

    // Inputs.
    printf("Welcome to Pipop Game: \n");
    printf("You choose a num to the best way for arrived to your home: \n");
    printf("Remember that the road is dark on the way home.\n");
        printf("1- Walking.\n");
        printf("2- Stealing a bicycle in front.\n");
        printf("3- Waiting for them to come for you.\n");
        printf("Enter a num: ");
            scanf("%i", &n);

    // Operations.
    switch (n)
    {
    case 1:
        printf("Congratulations, you'll get home, but, you'll get very tired, but everything is OK! ;)\n");
        printf("Created by: @sntwandyt\n");
        break;
    case 2: 
        printf("Okay, you'll get home, but the next day they'll chase you for stealing the bike. :(\n");
        printf("Created by: @sntwandyt\n");
        break;
    case 3: 
        printf("Upps, you waited all night, you starved to death. -_-\n");
        printf("Created by: @sntwandyt\n");
        break;    
    default:
        printf("OHOH! Error 404 not found the right num, try again!\n");
        printf("Created by: @sntwandyt\n");
        break;
    }
    return 0;
}