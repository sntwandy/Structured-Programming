#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct personalData
{
    char name[20];
    char lastName[30];
    int age;
};


// Main-Function.
int main(){
    // Variables.
    struct personalData person;
    
    // Inputs.
    printf("Keep your personal data with us! ;)\n");
    printf("\nEnter your name: ");
        gets(person.name);
    printf("Enter your last name: ");
        gets(person.lastName);    
    printf("Enter your age: ");
        scanf("%i", &person.age);
    printf("\nData saved!\n\n");  

    // Outputs.
    printf("To confirm : \n\n");
    printf("Your name is: %s\n", person.name);
    printf("Your last name is: %s\n", person.lastName);
    printf("Your age is: %i\n", person.age);
    printf("\nThanks to use our software.!\n");

    return 0;
}