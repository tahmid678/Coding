#include<stdio.h>

int main(){
    int x=10;
    int *ptr=NULL;

    printf("Value of x: %d\n",x);
    ptr=&x;
    printf("Value of *ptr: %d\n",*ptr);

    return 0;
}
