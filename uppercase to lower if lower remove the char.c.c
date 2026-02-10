#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char  str[100];
    fgets(str, sizeof str, stdin);
    int ctr, i, j = 0;
    char result[100];
    i = strlen(str);
    ctr = i;
    for(i = 0; i<ctr; i++){
        if(isupper(str[i])){
            putchar(tolower(str[i]));
        }
        else if(!islower(str[i]) && str[i] != '\n'){
            result[j++] = str[i];

        }
    }
    result[j] = '\0';
    printf("%s", result);
    return 0;
}
