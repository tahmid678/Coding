#include<stdio.h>
#include<math.h>

int main(){
    int i,number,n,temp=0;

    printf("Enter a number: ");
    scanf("%d",&number);

    if(number==0){
        printf("Binary value of %d is %d\n",number,number);
    }
    else{
       n=0;
        while(1){
            temp=pow(2,n);
            if(temp<=number){
                n++;
            }
            else{
               break;
            }
        }

        n=n-1;
        temp=0;
        char binary[n];

        for(i=n;i>=0;i--){
            temp+=pow(2,i);
            if(temp<=number){
               binary[n-i]='1';
            }
            else{
                temp-=pow(2,i);
                binary[n-i]='0';
            }
        }

        binary[n+1]='\0';

        printf("Binary value of %d is %s\n",number,binary);
    }

    return 0;
}
