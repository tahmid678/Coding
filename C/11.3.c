#include<stdio.h>

int main(){
    int i,j;
    int namta[10][10];

    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            namta[i-1][j-1]=i*j;
        }
    }

    for(i=1;i<=10;i++){
        printf("\nNamta of %d\n\n",i);
        for(j=1;j<=10;j++){
            printf("%d x %d = %d\n",i,j,namta[i-1][j-1]);
        }
    }

    return 0;
}
