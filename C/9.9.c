#include<stdio.h>
#include<string.h>
void modified_string(char str[]);

int main(){
    char str[1000];
    printf("Enter a string: ");
    gets(str);
    modified_string(str);

    return 0;
}

void modified_string(char str[]){
    int i,j=0,k=0,length;
    char word[1000];
    length=strlen(str);
    str[length]=' ';

    for(i=0;i<length;i++){
        if(str[i]==' '||str[i]=='.'){
            k=0;
            j=0;
            continue;
        }
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')||(str[i]>='0'&&str[i]<='9')){
            if(k==0 && str[i]>='a'&&str[i]<='z'){
                word[j]=str[i]-32;
                j++;
                k=1;
            }
            else{
                word[j]=str[i];
                k=1;
                j++;
            }

        }

        if(str[i+1]==' '||str[i+1]=='.'){
            word[j]='\0';
            printf("%s\n",word);
        }

    }
}
