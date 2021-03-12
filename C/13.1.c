#include<stdio.h>

int main(){
    int i,j,n;

    printf("How many columns do you want in your pattern: ");
    scanf("%d",&n);

    for(i=0;i<2*n-1;i++){
        if(i+1<=n){
           for(j=0;j<n-i;j++){
                printf("C ");
            }
            printf("\n");
        }
        else{
            for(j=i;j>=n-1;j--){
                printf("C ");
            }
            printf("\n");
        }
    }

    return 0;
}
