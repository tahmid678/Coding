#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double perimeter;
    double r,pi;
    cin>>r;

    pi=acos(-1);
    perimeter=2*pi*r;

    cout<<perimeter<<endl;

    return 0;
}
