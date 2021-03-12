#include<stdio.h>

int main(){
    int i,n;
    long long fib[50],temp,l=1,m=1;

    scanf("%d",&n);

    for(i=0;i<50;i++){
        if(i==0){
            fib[i]=l;
        }
        else if(i==1){
            fib[i]=m;
        }
        else{
            fib[i]=fib[i-2]+fib[i-1];
        }
    }

    if(n>0 && n<50){
        printf("%lld",fib[n-1]);
    }

    return 0;
}
