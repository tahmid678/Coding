#include<stdio.h>

int main()
{
    int t,a,b,div;

    scanf("%d",&t);

    if(t>=1&&t<=10)
    {
        while(t!=0)
        {
            scanf("%d %d",&a,&b);

            if(a>=1&&a<=100&&b>=1&&b<=100)
            {
                div=(a+b)/2;

                if(div%2==0)
                    printf("Sadia will be happy.\n");
                else
                   printf("Oops!\n");
            }
            else
                continue;

            t--;
        }
    }

    return 0;
}
