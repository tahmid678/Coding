#include<stdio.h>

int main(){
    int i,j,m,x,y,n,grid[10][10];
    char c;

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            grid[i][j]=1;
        }
    }

    printf("Enter the initial position: ");
    scanf("%d %d",&x,&y);

    printf("Enter the number of the blocked cells: ");
    scanf("%d",&n);

    printf("Now enter the cells :");

    for(i=0;i<n;i++){
        scanf("%d %d",&m,&n);
        grid[m][n]=0;
    }

    while(1){
        scanf("%c",&c);

        if(c=='S'){
            break;
        }
        else if(c=='R'&&grid[x][y+1]!=0&&y<9)
            y++;
        else if(c=='L'&&grid[x][y-1]!=0&&y>=0)
            y--;
        else if(c=='U'&&grid[x-1][y]!=0&&x>=0)
            x--;
        else if(c=='D'&&grid[x+1][y]!=0&&x<9)
            x++;
    }

    printf("Final position of the robot is: %d %d\n",x,y);

    return 0;
}
