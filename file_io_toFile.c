#include <stdio.h>

/*must terminate the program by Ctrl+D in linux
to provide EOF, otherwise contents written to 
the file will not save.
*/

int main(void)
{
    int c;
    FILE *fp;
    fp = fopen("NewFile.txt","a");
    while((c=fgetc(stdin))!=EOF){
        fputc(c,fp);
    }
    fclose(fp);


    return 0;
}