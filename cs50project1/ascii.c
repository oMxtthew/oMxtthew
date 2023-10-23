#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

    char *infile = NULL;

    scanf("%s", infile);
    
    FILE *image = fopen(infile, "r");

    if(image == NULL){
        printf("please enter a image file");
        return 1;
    }
}
