#include <stdio.h>
#include <string.h>

int main()
{
    /* unformatted char input               | unformatted char output 
    int gfetc(FILE *fp) / getc(FILE *fp)    | int fputc(int c, FILE *fp) / putc(int c, FILE*fp)
    returns the input char from stream      | returns EOF on error else positive number
    returns EOF for end of file or error    |
    */
    /************************* Example Code ****************************************
    int c;
    while((c=fgetc(stdin))!=EOF){
        fputc(c,stdout);
    }
    printf("EOF Encountered...\n");
    ********************************************************************************/

    /* Unformatted string input             | Unformatted string output
    char *fgets(char *s, int max, FILE *fp) | int fputs(const char *s, FILE *fp)
    reads from stream fp to string s,       | writes from string s to stream fp.
    max-1 characters, stopping on new line, |
    returns s.                              | returns EOF in case of any error, 
    It returns NULL in case of              | and non negative for no error.
    EOF or error encounters.                |
    char *gets(char *s) only for stdin      | int puts(const char *s) only for stdout
    * /

   /********************************Example Code **************************************

    char input[1000];
    while(fgets(input,sizeof(input),stdin)!= NULL){
        fputs(input,stdout);

    }
    printf("EOF Encountered...\n");

    ******************************************************************************/
    /* Formatted imput                              | Formatted output
    int scanf(char *format, ...) for stdin only     | int printf("%s",s) for stdout only
    int fscanf(FILE *stream,char *format,...) reads | int fprintf(FILE *stresam, char *format,...)
    from srtream to string or other variable        | converts & writes output to stream under the 
    as specified by the format. The last argument   | control of format.
    maust be pointer to the variable to store.      | 
    int sscanf(cont char *s, const char *format,...)| int sprintf(char *s, const char *format,...)
    here the input characters are taken from        | here the output is written to string s.  
    string s.                                       |
    Reads upto first white space, not include the   |
    white space.                                    |    
    returns EOF on error else returns number of     |  returns number of char written else negative 
    input items converted.                          |   if error occurs.


    /**********************Example code **************************************************/

    char name[100];
    char buffer[100];
    int a = 12345;
    int b = 0;
    printf("Enter your name: ");
    fscanf(stdin,"%s",name);
    fprintf(stdout,"%s\n",name);
    
    sprintf(buffer,"%d",a);
    fprintf(stdout,"%s\n",buffer);
    sscanf(buffer,"%d",&b);
    fprintf(stdout,"%d\n",b);





    return 0;
}


