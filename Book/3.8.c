#include<stdio.h>

int main(){
    FILE *fp;
    char ch;
    fp=fopen("my_file.txt","r+");

    while((ch=fgetc(fp))!=EOF)
        putchar(ch);

    fprintf(fp,"This file is opened in r+ mode.\n");
    fclose(fp);

    return 0;
}
