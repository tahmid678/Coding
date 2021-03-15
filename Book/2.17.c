#include<stdio.h>

int main(){
    char c='A';
    char *p,**q;

    p=&c;
    q=&p;

    printf("Value of c: %c\n",c);
    printf("Address of c: %p\n",&c);
    printf("Value of p: %p\n",p);
    printf("Address of p: %p\n",&p);
    printf("Value of q: %p\n",q);
    printf("Address of q: %p\n",&q);
    printf("Value of c: %c\n",**q);

    return 0;
}
