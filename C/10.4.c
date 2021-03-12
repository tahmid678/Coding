/* Author: Tahmid
   AUST CSE 40th
*/

#include<stdio.h>
#include<math.h>

void sieve(int size);
int is_prime(int n);

int ara[40];
int size=40;

int main(){
    int i,n;

    for(i=2;i<=size;i++){
        ara[i]=i;
    }

    for(i=2;i<=size;i++){
        printf("%d ",ara[i]);
    }

    printf("\n");

    for(i=2;i<=size;i++){
        ara[i]=1;
    }

    for(i=2;i<=size;i++){
        printf("%d ",ara[i]);
    }

    printf("\n");
    sieve(size);

    while(1){
        printf("\nEnter a number from 2 to 40 (0 to exit): ");
        scanf("%d",&n);

        if(n==0)
            break;
        else if(1==is_prime(n)){
            printf("%d is a prime number.\n",n);
        }
        else{
            printf("%d is not a prime number.\n",n);
        }
    }


    return 0;
}

void sieve(int size){
    int i,m;

    for(i=2;i<=size;i++){
        for(m=2;i*m<=size;m++){
           ara[i*m]=0;
        }
    }

    for(i=2;i<=size;i++){
        printf("%d ",ara[i]);
    }
}

int is_prime(int n){
    if(ara[n]==1)
        return 1;
    else
        return 0;
}
