#include<stdio.h>
#include<string.h>

int main(){
    char s[20];
    int i,len;

    scanf("%s",s);

    len=strlen(s);

    for(i=0;i<len;i++){
        if(i==0)
            s[i]-=32;
        else if(s[i]=='s')
            s[i]='$';
        else if(s[i]=='i')
            s[i]='!';
        else if(s[i]=='o'){
            s[i]='(';
            s[i+1]=')';
        }
        else if(i==len-1)
            s[i+1]='.';
    }

    printf("%s",s);

    return 0;
}
