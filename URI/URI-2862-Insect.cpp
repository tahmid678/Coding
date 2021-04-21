#include<iostream>
using namespace std;

int main(){
    int c,t;
    cin>>c;

    do{
        cin>>t;
        if(t>8000)
            cout<<"Mais de 8000!"<<endl;
        else
            cout<<"Inseto!"<<endl;
    }while(--c);

    return 0;
}
