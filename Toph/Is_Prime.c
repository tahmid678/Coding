#include<stdio.h>
#include<math.h>

int main(){
    int i,n,root,check=1;

    scanf("%d",&n);

    if(n<2)
        printf("No");
    else if(n==2)
        printf("Yes");
    else if(n%2==0)
        printf("No");
    else if(n>0&&n<1000){
        root=sqrt(n);

        for(i=3;i<=root;i=i+2){
            if(n%i==0){
                check=0;
                break;
            }
        }
        if(check==1)
            printf("Yes");
        else
            printf("No");
    }

    return 0;
}
