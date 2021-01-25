#include <stdio.h>

int main()
{
    int lineCount = 0;
    int c;
    while((c=fgetc(stdin))!=EOF){
        if(c=='\n'){
            lineCount++;
        }
    }
    printf("\nLine Count: %d\n",lineCount);





    return 0;
}
