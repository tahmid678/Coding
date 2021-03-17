#include<stdio.h>
#include<string.h>

int main(){
    int t;
    char s[100];

    scanf("%d",&t);

    while(t!=0){
        scanf("%s",s);
        int len=strlen(s);

        if(s[len-1]=='0' || s[len-1]=='2' || s[len-1]=='4' || s[len-1]=='6' || s[len-1]=='8')
            printf("even\n");
        else
            printf("odd\n");

        t--;
    }

    return 0;
}
