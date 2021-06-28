#include<iostream>
using namespace std;

int main(){
    int a,b,t,t1;
    float r1,r2;

    cin>>t;

    while(t--){
        cin>>a>>b>>r1>>r2;
        t1=0;
        while(1){
            t1++;
            a+=(a*r1)/100;
            b+=(b*r2)/100;

            if(a>b){
                if(t1>100){
                    cout<<"Mais de 1 seculo."<<endl;
                    break;
                }
                cout<<t1<<" anos."<<endl;
                break;
            }
        }
    }

    return 0;
}
