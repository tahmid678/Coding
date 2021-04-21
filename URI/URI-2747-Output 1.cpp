#include<iostream>
using namespace std;

int main(){
    int i,j;

    for(j=0;j<7;j++){
        if(j==0||j==6){
            for(i=0;i<39;i++){
                cout<<"-";
            }
            cout<<endl;
        }
        else{
            for(i=0;i<39;i++){
                if(i==0||i==38)
                    cout<<"|";
                else
                    cout<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
