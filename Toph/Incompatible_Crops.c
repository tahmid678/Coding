#include<stdio.h>

int main()
{
    char grid[30][30];
    int i,j,r,c,count=0;

    scanf("%d %d",&r,&c);

    getchar();

    if(r>0&&r<25&&c>0&&c<25)
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                scanf("%c",&grid[i][j]);
            }
            getchar();
        }

        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                printf("%d\t",grid[i][j]);
            }
            printf("\n");
        }

        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(i==0&&j==0&&grid[i][j]=='.'){
                    if(grid[i+1][j]=='.'&&grid[i][j+1]=='.'){
                        count++;
                    }
                }

                else if(i==0&&grid[i][j]=='.'){
                    if(j<c-1){
                        if(grid[i+1][j]=='.'&&grid[i][j-1]=='.'&&grid[i][j+1]=='.'){
                        count++;
                        }
                    }
                    else{
                        if(grid[i+1][j]=='.'&&grid[i][j-1]=='.'){
                        count++;
                        }
                    }
                }

                else if(j==0&&i<r-1&&grid[i][j]=='.'){
                    if(grid[i-1][j]=='.'&&grid[i+1][j]=='.'&&grid[i][j+1]=='.'){
                        count++;
                    }
                }
                else if(grid[i][j]=='.')
                {
                    if(i<r-1&&j<c-1&&grid[i-1][j]=='.'&&grid[i+1][j]=='.'&&grid[i][j-1]=='.'&&grid[i][j+1]=='.'){
                        count++;
                    }
                    else if(i<r&&j<c-1&&grid[i-1][j]=='.'&&grid[i][j-1]=='.'&&grid[i][j+1]=='.'){
                        count++;
                    }
                    else if(i<r&&j<c&&grid[i-1][j]=='.'&&grid[i][j-1]=='.'){
                        count++;
                    }
                }
            }
        }

        printf("%d",count);
    }

    return 0;
}
