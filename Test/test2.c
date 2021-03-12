#include<stdio.h>

int main(){
    int t,n,a,b;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        a=n%10;
        b=n/10000;

        printf("Sum = %d\n",a+b);
    }

    return 0;
}
