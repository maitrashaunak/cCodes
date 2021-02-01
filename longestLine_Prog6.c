#include <stdio.h>

int getLine(char *s, int limit){
    int c;
    int i;
    for(i=0;i<limit && (c=fgetc(stdin))!=EOF && c!='\n';i++){
        s[i] = c;
    }
    if(c=='\n'){
        s[i++] = c;
        
    }
    s[i] = '\0';

    return i;
}

void copyStr(char *source, char *dest){
    int i=0;
    while((dest[i]=source[i])!='\0'){
        i++;
    }

}

int main()
{
    int len = 0; /*lenfth of the input line */
    int maxlen = 0; /* max lengh */

    char longestLine[1000];
    char inputLine[1000];
    while((len = getLine(inputLine,sizeof(inputLine)))>0){
        if(len > maxlen){
            maxlen = len;
            copyStr(inputLine,longestLine);
        }
        if(maxlen>0){
            printf("Longest Line: %s\n",longestLine);
        }



    }



    return 0;
}