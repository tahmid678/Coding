#include<iostream>
using namespace std;

int main(){
    int n,m,temp,r,i=1,j=1;
    cin>>n;

    while(1){
        m=0;
        temp=i;
        do{
            r=temp%10;
            temp=temp/10;
            m+=m*10+r;
        }while(temp>0);

        if(m==i){
           cout<<j<<"th palindrome number: "<<i<<endl;

           if(j==n){
                return 0;
           }
           j++;
        }

        i++;
    }
}
