#include<stdio.h>

int main(){
    FILE *fp;
    char ch;
    fp=fopen("my_file.txt","w+");

    while((ch=fgetc(fp))!=EOF)
        putchar(ch);

    fprintf(fp,"This file is opened in w+ mode");
    fclose(fp);

    return 0;
}
