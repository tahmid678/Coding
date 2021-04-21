#include<iostream>
using namespace std;

int main(){
    int b,g;
    cin>>b;
    cin>>g;

    if(b>1&&b<1000&&g>100&&g<1000&&g>=b){
        if(b==g/2)
            cout<<"Amelia tem todas bolinhas!"<<endl;
        else
            cout<<"Faltam "<<g/2-b<<" bolinha(s)"<<endl;
    }

    return 0;
}
