#include<stdio.h>
#include<string.h>

void modified_string(char str[]);

int main()
{
    char str[1002];
    gets(str);
    modified_string(str);

    return 0;
}

void modified_string(char str[]){
    int i,k=0,length;
    length=strlen(str);

    for(i=0;i<length;i++){
        if(str[i]==' '||str[i]=='.'){
           k=0;
           continue;
        }
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')){
            if(k==0 && str[i]>='a' && str[i]<='z'){
                printf("%c",str[i]-32);
                k=1;
            }
            else{
               printf("%c",str[i]);
            }
        }

        if(str[i+1]==' '||str[i+1]=='.'){
            printf("\n");
        }
    }
}
