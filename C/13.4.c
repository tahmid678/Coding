#include<stdio.h>

int main(){
    int i,j,k,l,n;

    printf("How many rows do you want in your pattern: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<=2*n;j++){
            if(j<=i || j>=2*n-i){
                printf("C");
            }
            else if(j-i==1) {

            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
