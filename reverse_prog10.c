#include <stdio.h>
#include <string.h>

char  *reverse(char s[])
{
    int i;
    int j;
    int c;
    for(i=0,j=strlen(s)-1; i<j; i++,j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    return s;
}

int main(void)
{
    char s[20] = "Hello World";
    printf("Reverse of Hello World is: %s\n",reverse(s));
    return 0;
}