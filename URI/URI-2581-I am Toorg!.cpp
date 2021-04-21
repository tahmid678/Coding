#include<iostream>
using namespace std;

int main(){
    int n;
    string ques;
    cin>>n;
    getchar();

    do{
        getline(cin,ques);
        cout<<"I am Toorg!"<<endl;
    }while(--n);

    return 0;
}
