#include<stdio.h>
#include<math.h>

char ara[50];
int size=50;

void print_ara(){
    int i;

    for(i=2;i<size;i++){
        printf("%4c",ara[i]);
    }
    printf("\n");

    for(i=2;i<size;i++){
        printf("----");
    }
    printf("\n");

    for(i=2;i<size;i++){
        printf("%4d",i);
    }
    printf("\n\n\n");
}

void sieve(){
    int i,j,root;

    for(i=2;i<size;i++){
        ara[i]='Y';
    }

    print_ara();
    root=sqrt(size);

    for(i=2;i<=root;i++){
        if(ara[i]=='Y'){
            for(j=2;i*j<=size;j++){
                ara[i*j]='N';
            }
            print_ara();
        }
    }
}

char is_prime(int n){
    int i;

    if(n<2)
        return 'N';

    return ara[n];
}

int main(){
    int i,n;

    sieve();

    while(1){
        printf("Please enter a number (enter 0 to exit): ");
        scanf("%d",&n);

        if(n==0)
            break;
        if(n>=size)
            printf("The number should be less than %d\n",size);
        else if('Y'==is_prime(n))
            printf("%d is a prime number.\n",n);
        else
            printf("%d is not a prime number.\n",n);
    }

    return 0;
}
