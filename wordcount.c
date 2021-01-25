#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /*outside a word */


int main()
{
    int c;
    int nw,nl,nc,state;
    nw = 0;
    nl = 0;
    nc = 0;
    state = OUT; /* initially outside a word */ 
    while((c=fgetc(stdin))!=EOF){
        nc++; /* No of characters */
        if(c=='\n'){
            nl++; /* no of lines */
        }
        if(c==' ' || c=='\n' || c=='\t'){
            state = OUT;
        }
        else if(state == OUT){
            nw++; /* no of words as outside the word */
            state = IN;

        }
    }

    printf("No of chars: %d\n",nc);
    printf("No of words: %d\n",nw);
    printf("No of lines: %d\n",nl);







    return 0;
}