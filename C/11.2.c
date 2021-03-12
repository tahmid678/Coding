#include<stdio.h>

int main(){
    int i,j;
    int marks[4][10];

    for(i=0;i<4;i++){
        if(i==0){
            printf("Enter %dst term numbers: ",i+1);
        }
        else if(i==1){
            printf("Enter %dnd term numbers: ",i+1);
        }
        else if(i==2){
            printf("Enter %drd term numbers: ",i+1);
        }
        else{
            printf("Enter total numbers: ");
        }

        for(j=0;j<10;j++){
            scanf("%d",&marks[i][j]);
        }

        printf("\n");
    }

        for(i=0;i<10;i++){
            marks[3][i]=marks[0][i]/4.0+marks[1][i]/4.0+marks[2][i]/2.0;
            printf("Roll No: %d\t Total Marks: %d\n",i+1,marks[3][i]);
        }

        return 0;
}
