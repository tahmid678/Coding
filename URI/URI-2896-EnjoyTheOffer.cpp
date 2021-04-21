#include<iostream>
using namespace std;

int main(){
    int t,k,n;
    cin>>t;

    while(t--){
        cin>>n>>k;
        if(n%k==0)
            cout<<n/k<<endl;
        else if(n%k!=0){
            int temp=n/k;
            cout<<(n-temp*k)+temp<<endl;
        }
    }

    return 0;
}
