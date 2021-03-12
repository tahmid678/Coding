#include<stdio.h>

int main()
{
    int i,j,k,n,temp,min_ind;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int ara[n];
    printf("Enter the elements of ara: ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0; i<n; i++)
    {
        temp=ara[i];
        min_ind=i;
        for(j=i+1; j<n; j++)
        {
            if(ara[j]<temp)
            {
                temp=ara[j];
                min_ind=j;
            }
        }
        ara[min_ind]=ara[i];
        ara[i]=temp;

        printf("Array after %d pass: ",i+1);

        for(k=0;k<n;k++){
            printf("%4d",ara[k]);
        }
        printf("\n");
    }

    printf("Sorted array: \n");

    for(i=0;i<n;i++){
        printf("%4d",ara[i]);
    }

    return 0;
}
