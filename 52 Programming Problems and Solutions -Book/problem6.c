#include<stdio.h>

int main(){
    int t,n,a,b;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        a=n%10;

        while(n!=0){
            b=n%10;
            n=n/10;
        }

        printf("Sum = %d\n",a+b);
    }

    return 0;
}
