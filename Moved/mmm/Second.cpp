#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,45,67,33,44,123,456,789,0};
    int i;
    cout<<"Elements of the array: ";

    //a[]::iterator i;
    for(i=a.begin();i!=a.end();i++){
            cout<<a[i]<<" ";
    }

    return 0;
}
