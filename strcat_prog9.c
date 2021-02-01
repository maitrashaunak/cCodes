#include <stdio.h>

/* concatenate t at the end of s */

void myStrcat(char s[], char t[])
{
    int i=0;
    int j = 0;
    while(s[i] != '\0') /*not to include \0 so s[i++] not used */
            i++;        /* go to end of s */
    while((s[i++] = t[j++])!= '\0'); /* here to include \0 */
        
}

int main(void)
{
    char s[100] = "Hello";
    char t[] = " World\n";
    myStrcat(s,t);
    printf("%s",s);
    return 0; 

}
