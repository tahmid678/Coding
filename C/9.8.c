#include<stdio.h>
int string_compare(char a[],char b[]);
int string_length(char a[]);

int main()
{
    char a[50],b[50];
    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);

    if(string_compare(a,b)==1)
        printf("%s is bigger than %s\n",a,b);
    else if(string_compare(a,b)==-1)
        printf("%s is smaller than %s\n",a,b);
    else
        printf("%s is equal to %s\n",a,b);

    return 0;
}

int string_compare(char a[],char b[]){
    int i,j;

    for(i=0,j=0;a[i]!='\0' && b[i]!='\0';i++){
        if(a[i]<b[i])
            return -1;
        if(a[i]>b[i])
            return 1;
    }

    if(string_length(a)==string_length(b))
        return 0;
    if(string_length(a)<string_length(b))
        return -1;
    if(string_length(a)>string_length(b)){
        return 1;
    }
}

int string_length(char a[]){
    int i;
    for(i=0;a[i]!='\0';i++);
    return i;
}
