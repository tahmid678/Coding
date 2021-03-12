#include<stdio.h>

int string_length(char str[]);

int main()
{
    char country[100];
    int length;
    while(NULL!=gets(country)){
       length=string_length(country);
       printf("length=%d\n",length);
    }

    return 0;
}

int string_length(char str[]){
    int i=0;

    for(i=0;str[i]!='\0';i++);
    return i;
}
