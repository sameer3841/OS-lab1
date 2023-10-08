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

    int len = ((strlen(str) * (strlen(str) + 1)) / 2) + 1;
    char* ans = (char*)malloc(len);
    ans[0] = '\0';
    for(int c = 0; c < strlen(str); c++){
        strncpy(ans,str,c);
    }
    ans[len - 1] = '\0';
    return ans;
}


