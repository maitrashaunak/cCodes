#include <stdio.h>

int main()
{
    int c;
    int chCount = 0;
    while((c=fgetc(stdin))!=EOF){
        chCount++;
    }

        printf("\nTotal Character: %d\n",chCount);


    return 0;
}