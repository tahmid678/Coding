#include<stdio.h>

int main(){
    int i,n,temp,check=1;

    scanf("%d",&n);

    int decent[n];

    for(i=0;i<n;i++){
        scanf("%d",&temp);

        if(temp>=1&&temp<=1000){
            decent[i]=temp;
        }
        else{
            i--;
        }
    }

    for(i=0;i<n-1;i++){
        if(decent[i]>decent[i+1])
            check=0;
    }

    if(check==1)
        printf("Yes");
    else
        printf("No");

    return 0;
}
