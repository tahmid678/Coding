#include<stdio.h>
#include<math.h>

int is_prime(int n);

int ara[10000];
int prime[1500];
int size=10000,k=2;


void print_ara(){
    int i;

    for(i=2;i<size;i++){
        printf("%8d",ara[i]);
    }
    printf("\n");

    for(i=2;i<size;i++){
        printf("----");
    }
    printf("\n");

    for(i=2;i<size;i++){
        printf("%8d",i);
    }
    printf("\n\n\n");
}

void sieve(){
    int i,j;

    for(i=2;i<size;i++){
        ara[i]=1;
    }

    print_ara();

    for(i=2;i<=size;i++){
        if(ara[i]==1){
            for(j=2;i*j<=size;j++){
                ara[i*j]=0;
            }

            printf("\n\n%d",i);
            prime[k]=i;
            k++;
        }
    }

}

int is_prime(int n){
    int i;

    if(n<2)
        return 0;
    for(i=2;i<k;i++){
        if(n==prime[i])
            return 1;
        else if(n%prime[i]==0)
            return 0;
    }

    return 1;
}

int main(){
    int n,i,cnt=0;

    sieve();

    printf("\n\n");

    for(i=2;i<k;i++){
        printf("%d\t",prime[i]);
        cnt++;
    }

    while(1){
        printf("\n\nPlease enter a number (enter 0 to exit): ");
        scanf("%d",&n);

        if(n==0)
            break;
        if(n>=size*size){
            printf("The number should be less than %d\n",size*size);
        }
        else if(1==is_prime(n))
            printf("%d is a prime number.\n",n);
        else if(0==is_prime(n))
            printf("%d is not a prime number.\n",n);
    }

    printf("\nCNT: %d\n",cnt);

    return 0;
}
