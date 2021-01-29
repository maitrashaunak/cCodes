/* Simple file copy program, if no input file is
specified, then it must copy the standard input 
to standard output, else copy the file contents
to standard output. We may provide more than one 
file to the program as argumrent.
*/

#include <stdio.h>

void filecopy(FILE *ifp, FILE *ofp)
{
    int c;
    while((c=fgetc(ifp))!= EOF)
    {
        putc(c,ofp);
    }

}



int main(int argc, char *argv[])
{
    FILE *fp;
    void filecpoy(FILE *, FILE *);
    if(argc==1) /* only one argument, so copy standard input */
    {
        filecopy(stdin,stdout);
    }
    else
    {
        while(--argc > 0)
        {
            if((fp=fopen(*++argv,"r"))==NULL)
            {
                printf("Can't open %s\n",*argv);
                return 1;
            }
            else
            {
                filecopy(fp,stdout);
                fclose(fp);
                
            }
        }
    }
    return 0;
}