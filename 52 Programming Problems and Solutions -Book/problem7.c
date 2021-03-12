#include<stdio.h>
#include<string.h>

int main(){
    char s[100000];
    int i,len,t,cnt,number;

    scanf("%d",&t);
    getchar();

    while(t--){
        len=strlen(gets(s));
        cnt=0;
        number=0;

        for(i=0;i<=len;i++){
            if(s[i]>='0'&&s[i]<='9'){
                cnt=1;
            }
            else if((s[i]==' '||s[i]=='\0')&&cnt!=0){
                number++;
                cnt=0;
            }
        }

        printf("%d\n",number);
    }

    return 0;
}
