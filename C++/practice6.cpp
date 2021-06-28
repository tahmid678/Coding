#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double num,root;
    cin>>num;
    root=sqrt(num);

    if(root-floor(root)<0.5){
        cout<<"Root is: "<<root<<endl;
        cout<<"Nearest integer of root: "<<floor(root)<<endl;
    }
    else{
        cout<<"Root is: "<<root<<endl;
        cout<<"Nearest integer of root: "<<ceil(root)<<endl;
    }

    return 0;
}
