#include<stdio.h>

int main(){
    int i,num,fact=1;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    if(num<0){
        printf("Please enter a positive integer.\n");
    }
    else if(num==0){
        printf("Factorial of %d is %d.\n",num,0);
    }
    else{
       for(i=num;i>=1;i--){
        fact*=i;

       }
        printf("Factorial of %d is %d.\n",num,fact);
    }
    return 0;
}
