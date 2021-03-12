#include<stdio.h>

int string_length(char str[]);

int main()
{
    char country[100];

    int length;

    while(NULL!=gets(country)){
        printf("%s\t length=%d\n\n",country,string_length(country));
    }

    return 0;
}

int string_length(char str[]){
    int i=0;

    while(str[i]!='\0'){
        i++;
    }

    return i;
}
