#include<stdio.h>

int main(){
    int i,j,k,n;

    printf("How many columns do you want in your pattern: ");
    scanf("%d",&n);

    for(i=0;i<2*n-1;i++){
        if(i<=n-1){
            for(k=0;k<i;k++){
                printf(" ");
            }
            for(j=i;j<n;j++){
                printf("C");
            }
            printf("\n");
        }
        else{
            for(k=i;k<2*n-2;k++){
                printf(" ");
            }
            for(j=n;j<=i+1;j++){
                printf("C");
            }
            printf("\n");
        }
    }

    return 0;
}
