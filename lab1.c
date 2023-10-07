#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"

char* readString(char* fileName){
    char * dest;
    dest = (char *) malloc(100);
    FILE *fileptr;                          
    fileptr = fopen(fileName, "r");   
    fgets(dest, MAX_LINE_LEN, fileptr);
    fclose( fileptr );
    dest[strcspn(dest, "\n")] = '\0';
    return dest;
}

char* mysteryExplode(const char* str){
    int len = strlen(str);
    int strlen = (len * (len ));
    return str;
}
