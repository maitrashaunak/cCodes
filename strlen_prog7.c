#include <stdio.h>

int myStrlen(char s[])
{
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

int main(void)
{
    printf("Hello World: %d words\n",myStrlen("Hello World"));
    return 0;
}