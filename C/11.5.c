#include<stdio.h>

int main(){
    int row,col,even=0,odd=0,sum=0;
    int namta[10][10];

    for(row=0;row<10;row++){
        for(col=0;col<10;col++){
            namta[row][col]=(row+1)*(col+1);
        }
    }

    for(row=0;row<10;row++){
        for(col=0;col<10;col++){
                if(namta[row][col]%2==0){
                    even++;
                    sum+=namta[row][col];
                    printf("%d x %d = %d\n",(row+1),(col+1),namta[row][col]);
                }
                else{
                    odd++;
                    sum+=namta[row][col];
                    printf("%d x %d = %d\n",(row+1),(col+1),namta[row][col]);
                }
        }
        printf("\n");
    }

    printf("Total even numberS: %d.\n",even);
    printf("Total odd numbers: %d.\n",odd);
    printf("Total sum: %d.\n",sum);

    return 0;
}
