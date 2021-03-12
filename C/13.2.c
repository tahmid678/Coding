#include<stdio.h>

int main(){
    int i,j,k,n;

    while(1){
        printf("How many columns do you want in your pattern: ");
        scanf("%d",&n);

        if(n%2==0){
            printf("Column numbers must be odd.\n");
            continue;
        }
        else{
            for(i=0;i<n;i++){
                if(i<=n/2){
                for(k=0;k<i;k++){
                    printf(" ");
                }
                for(j=i;j<n-i;j++){
                    printf("C");
                }
                printf("\n");
            }
        else{
            for(k=n;k>i+1;k--){
                printf(" ");
            }
            for(j=n;j<=2*i+1;j++){
                printf("C");
            }
            printf("\n");
        }

        }

    }

        break;
    }
    return 0;
}
