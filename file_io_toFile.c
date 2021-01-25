#include <stdio.h>


int main()
{
    int c;
    FILE *fp;
    while((c=fgetc(stdin))!=EOF){
     fp = fopen("NewFile.txt","a");
     fputc(c,fp);
     fclose(fp);   
    }

 return 0;
}