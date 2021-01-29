/* char *fgets(char *line, int maxline, FLIE *fp);
int fputs(char *line, FILE *fp);
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *ifp;
    char line[1000];
    ifp = fopen("hello4.txt", "a"); /*Creates the file if not exsists */
    fputs("\nThis is appended by fputs\n",ifp);
    fclose(ifp);
    ifp = fopen("hello4.txt", "r");
    while(fgets(line,1000,ifp) != NULL)
    {
     printf("%s",line);
    }
    exit(0);



}




