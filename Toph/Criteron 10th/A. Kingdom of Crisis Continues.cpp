#include<iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;

    if((n*(n+1))%2==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}


