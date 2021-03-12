#include<stdio.h>

int main(){
    int i,j;

    for(i=1000,j=1;i>=1;i--,j++){
        if(i==1000){
            printf("%d\t",i);
            continue;
        }
        if(i%5==0)
            printf("\n");

        printf("%d\t",i);
    }

    return 0;
}
