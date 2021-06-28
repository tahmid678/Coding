#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double x1,x2,x3,y1,y2,y3,area;
    cin>>x1>>x2>>x3>>y1>>y2>>y3;

    area=0.5*fabs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));

    cout<<"Area : "<<area<<endl;

    return 0;
}
