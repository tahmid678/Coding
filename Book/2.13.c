#include<stdio.h>

int main(){

    char s[]="Bangladesh";

    printf("Name of our country: %s\n",s);
    printf("Address of s: %p\n",s);
    printf("Content of s[0]: %c\n",s[0]);
    printf("Address of s[0]: %p\n",&s[0]);
    printf("Content of s[1]: %c\n",s[0+1]);
    printf("Address of s[1]: %p\n",&s[0+1]);
    printf("Content of s[2]: %c\n",s[0+2]);
    printf("Address of s[2]: %p\n",&s[0+2]);
    printf("Content of s[3]: %c\n",s[0+3]);
    printf("Address of s[3]: %p\n",&s[0+3]);
    printf("Content of s[4]: %c\n",s[0+4]);
    printf("Address of s[4]: %p\n",&s[0+4]);
    printf("Content of s[5]: %c\n",s[0+5]);
    printf("Address of s[5]: %p\n",&s[0+5]);
    printf("Content of s[6]: %c\n",s[0+6]);
    printf("Address of s[6]: %p\n",&s[0+6]);
    printf("Content of s[7]: %c\n",s[0+7]);
    printf("Address of s[7]: %p\n",&s[0+7]);
    printf("Content of s[8]: %c\n",s[0+8]);
    printf("Address of s[8]: %p\n",&s[0+8]);
    printf("Content of s[9]: %c\n",s[0+9]);
    printf("Address of s[9]: %p\n",&s[0+9]);

    return 0;
}
