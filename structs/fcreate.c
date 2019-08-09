#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    printf("Create a file!\n");
    
    FILE *file;
    file = fopen("file.dat", "w"); //Can be customized.
    
    if(file != NULL){
        printf("Done!\n");
        printf("File created! ;)\n");
    } else{
        printf("\nERROR:\n\n");
        printf("Error creating the file, try again! :(\n");
    }

    return 0;
}