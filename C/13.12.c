#include<stdio.h>

int main(){
    int grid[9][9],x,y;

    char c;

    printf("Enter the initial position of the robot: ");
    scanf("%d %d",&x,&y);

    getchar();

    while(1){
        printf("Enter Command: ");
        scanf("%c",&c);
        getchar();

        if(c=='U'){
            x--;
        }
        else if(c=='D'){
            x++;
        }
        else if(c=='R'){
            y++;
        }
        else if(c=='L'){
            y--;
        }

        if(c=='S'){
            break;
        }
    }

    printf("Final position of the robot: ");
    printf("(%d,%d)\n",x,y);

    return 0;
}
