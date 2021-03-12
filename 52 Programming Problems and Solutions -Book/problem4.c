#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,i,j=1,root,q,s[100];

    scanf("%d",&t);

    while(j<=t)
    {
        scanf("%d",&n);
        root=sqrt(n);
        printf("Case %d: ",j);

        int k=0;

        for(i=1; i<=root; i++)
        {
            if(n%i==0 && i!=(n/i))
            {
                s[k]=i;
                k++;
                s[k]=(n/i);
                k++;
            }
            else if(n%i==0 && i==(n/i))
            {
                s[k]=i;
                k++;
            }
        }

        for(i=0; i<k; i++)
        {
            int min=s[i];
            int indx=i;
            for(q=i+1; q<k; q++)
            {
                if(min>s[q])
                {
                    min=s[q];
                    indx=q;
                }
            }

            int temp=min;
            s[indx]=s[i];
            s[i]=temp;
        }

        for(i=0; i<k; i++)
        {
            if(i==k-1)
                printf("%d\n",s[i]);
            else
                printf("%d ",s[i]);
        }

        j++;
    }

    return 0;
}
