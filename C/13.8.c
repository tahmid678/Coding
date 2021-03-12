#include<stdio.h>

int main()
{
    int num,i,j,prime[100],factor[100],multiple[100],f[100];

    while(1)
    {
        printf("Enter a number between 1 to 99 (enter 0 to exit): ");
        scanf("%d",&num);

        printf("\n");

        if(num==0)
        {
            break;
        }
        else if(num>99)
        {
            printf("\nThe number should be between 1 to 99.\n\n");
            continue;
        }

        for(i=0,j=1; j<=num; j++,i++)
        {
            factor[i]=j;
            f[i]=j;
        }

        printf("Factorial array of %d:\n\n",num);
        for(i=0; i<num; i++)
        {
            printf("%4d",factor[i]);
        }
        printf("\n\n");

        printf("Copied factorial array of %d:\n\n",num);
        for(i=0; i<num; i++)
        {
            printf("%4d",f[i]);
        }
        printf("\n\n");

        printf("All prime numbers between 1 to 99: \n\n");
        int k=0;
        for(i=2; i<=99; i++)
        {
            if(i==2)
            {
                prime[k]=i;
                k++;
            }
            else
            {
                int cnt=1;
                for(j=2; j<i; j++)
                {
                    if(i%j==0)
                    {
                        cnt=0;
                        break;
                    }
                }

                if(cnt==1)
                {
                    prime[k]=i;
                    k++;
                }
            }
        }

        for(i=0; i<k; i++)
        {
            printf("%4d",prime[i]);
        }


        int m,n,p;


        for(j=0; j<k; j++)
        {
            n=0;
            for(i=0; i<num; i++)
            {
                m=0;
                if(f[i]%prime[j]==0)
                {
                    while(f[i]%prime[j]==0)
                    {
                        m++;
                        f[i]=f[i]/prime[j];
                    }
                }
                n+=m;
            }
            multiple[j]=n;
        }

        printf("\n\n");

        printf("Modified copied factor array: \n");
        for(i=0; i<num; i++)
        {
            printf("%4d",f[i]);
        }

        printf("\n\n");

        printf("Required solution is: \n\n");

        for(i=0; i<k && multiple[i]!=0; i++)
        {
            if(multiple[i+1]==0)
            {
                printf("(%d,%d)",prime[i],multiple[i]);
            }
            else
            {
                printf("(%d,%d),",prime[i],multiple[i]);
            }
        }

        printf("\n\n");

    }

    return 0;
}
