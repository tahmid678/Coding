#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a,b,c,A,B,C;
    cin>>a>>b>>c;

    A=acos((b*b+c*c-a*a)/(2*b*c));
    cout<<"Angle A: "<<A<<endl;
    B=acos((a*a+c*c-b*b)/(2*a*c));
    cout<<"Angle B: "<<B<<endl;
    C=acos((a*a+b*b-c*c)/(2*a*b));
    cout<<"Angle C: "<<C<<endl;

    cout<<endl<<"Sum of three angles: "<<A+B+C<<endl;

    return 0;
}
