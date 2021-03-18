#include<stdio.h>

int main(){
    FILE *fp;
    char filename[]="my_file.txt",ch;
    fp=fopen(filename,"r");

    printf("%s:\n",filename);
    while((ch=fgetc(fp))!=EOF)
        putchar(ch);
    fclose(fp);

    return 0;
}
