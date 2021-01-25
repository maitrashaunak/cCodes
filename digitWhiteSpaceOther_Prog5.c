#include <stdio.h>

int main()
{
    int i;
    int c;
    int whiteSpaces = 0;
    int others = 0;
    int digits[10];
    for(i=0;i<10;i++){
        digits[i] = 0;
    }
    while((c=fgetc(stdin))!=EOF){
        if(c >= '0' && c<='9'){
            digits[c-'0']++;
        }
        else if(c==' ' || c=='\t' || c=='\n'){
            whiteSpaces++;
        }
        else{
            others++;
        }
    }
    for(i=0;i<10;i++){
        printf("%d\n",digits[i]);
    }
        printf("No of Spaces: %d\n", whiteSpaces);
        printf("Others: %d\n",others);
    






    return 0;
}