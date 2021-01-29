/* Simple file copy program, if no input file is
specified, then it must copy the standard input 
to standard output, else copy the file contents
to standard output. We may provide more than one 
file to the program as argumrent.
This program handels the error in proper way.
*/

#include <stdio.h>
#include <stdlib.h>

void filecopy(FILE *ifp, FILE *ofp)
{
    int c;
    while((c=getc(ifp))!= EOF)
    {
        putc(c,ofp);
    }

}



int main(int argc, char *argv[])
{
    FILE *fp;
    void filecpoy(FILE *, FILE *);
    char *prog=argv[0];
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
                fprintf(stderr,"%s: Can't open %s\n",prog,*argv);  /* note fprintf() used */
                exit(1);  /*exit() used */
            }
            else
            {
                filecopy(fp,stdout);
                fclose(fp);
                
            }
            if(ferror(stdout))
            {
                fprintf(stderr,"%s error writing stdout ",prog);
                exit(2);
            }
        }
    }
    exit(0);
}