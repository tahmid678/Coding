#include<stdio.h>
#include<string.h>

int main()
{
    int i,t,l,b,o,cnt=0;
    char S[100];

    scanf("%d",&t);
    getchar();

    while(t--)
    {
        scanf("%s",S);
        getchar();
        l=strlen(S);

        b=0;
        o=0;
        for(i=0; i<l; i++)
        {
            if(S[i]=='O'||(S[i]>='0'&&S[i]<='6'))
            {
                b++;
                if(b>=6)
                {
                    o++;
                    b=0;
                }
            }
        }

        if(o!=0 && b!=0)
        {
            if(o==1 && b==1)
                printf("%d OVER %d BALL\n",o,b);
            else if(o>1 && b==1)
                printf("%d OVERS %d BALL\n",o,b);
            else if(o==1 && b>1)
                printf("%d OVER %d BALLS\n",o,b);
            else
                printf("%d OVERS %d BALLS\n",o,b);
        }
        else if(o==0 && b!=0)
        {
            if(b>1)
                printf("%d BALLS\n",b);
            else
                printf("%d BALL\n",b);
        }
        else if(o!=0&&b==0){
            if(o>1)
                printf("%d OVERS\n",o);
            else
                printf("%d OVER\n",o);
        }
    }

    return 0;
}
