#include<stdio.h>

int main(){
    int x,y,y1;

    scanf("%d %d",&x,&y);

    y1=y;

    if(y%x==0)
        printf("%d\n",y%x);
    else{
        while(y%x!=0){
            y++;
        }

        printf("%d\n",y-y1);
    }

    return 0;
}
