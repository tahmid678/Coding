#include<stdio.h>

int main()
{
    int t,n;

    scanf("%d",&t);

    while(t!=0)
    {
        scanf("%d",&n);
        if(n%2==0)
            printf("even\n");
        else
            printf("odd\n");

        t--;
    }

    return 0;
}
