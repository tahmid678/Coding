#include<stdio.h>

int main(){
    FILE *fp;
    char filename[]="my_file.txt",ch;
    fp=fopen(filename,"a+");
    printf("The contents of %s file:\n",filename);

    while((ch=fgetc(fp))!=EOF)
        putchar(ch);

    fprintf(fp,"This file is opened in a+ mode.\n");

    fclose(fp);

    return 0;

}
