#include<stdio.h>

int main(){
    int array[5][5];
    int row,col;

    printf("Enter array's elements: \n");

    for(row=0;row<5;row++){
        for(col=0;col<5;col++){
            scanf("%d",&array[row][col]);
        }
    }

    int array2[5][5];

    for(row=0;row<5;row++){
        for(col=0;col<5;col++){
            array2[row][col]=array[col][row];
        }
    }

    printf("Array's Elements: \n");

    for(row=0;row<5;row++){
        for(col=0;col<5;col++){
            printf("%d\t",array[row][col]);
        }
        printf("\n");
    }

    printf("New Array's Elements: \n");

    for(row=0;row<5;row++){
        for(col=0;col<5;col++){
            printf("%d\t",array2[row][col]);
        }
        printf("\n");
    }

    return 0;
}
