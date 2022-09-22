#include <stdio.h>
#include <string.h>
char *cap_string(char *n){
size_t i;
    for (i=0; i < strlen(n);i++){
        if (n[i - 1] == ' ' || n[i - 1] == '\n' || n[i - 1] == '\t' || n[i - 1] == '.' || n[i - 1] == ',' || n[i - 1] == ';' || n[i - 1] == '!' || n[i - 1] == '?' || n[i - 1] == '"'){
            if (n[i] >= 97 && n[i] <= 122){
                n[i] -= 32; 
            }
           
        }
        else{
            continue;
        }
    }
    return(n);
}
