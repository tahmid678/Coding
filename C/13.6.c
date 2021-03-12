#include<stdio.h>
#include<string.h>

int main(){
    char string[100];
    int i,j,length,cnt;

    printf("Enter a string: ");
    //scanf("%s",string);
    gets(string);

    length=strlen(string);

    cnt=1;
    for(i=0,j=length-1;i<length/2;i++,j--){
        if(string[i]!=string[j]){
            cnt=0;
            break;
        }
    }

    if(cnt==0){
        printf("%s is not a palindrome.\n",string);
    }
    else{
        printf("%s is a palindrome.\n",string);
    }

    return 0;
}
