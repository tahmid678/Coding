#include<stdio.h>

void decimal_to_binary(int n);

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    decimal_to_binary(number);

    return 0;
}

void decimal_to_binary(int n){
    int binary[100];
    int i=0,j,rem,number;
    number=n;

    while(1){
        rem=n%2;
        binary[i]=rem;
        n=n/2;
        if(n==0)
            break;
        i++;
    }

    printf("Binary of %d is: ",number);
    for(j=i;j>=0;j--){
        printf("%d",binary[j]);
    }

}




