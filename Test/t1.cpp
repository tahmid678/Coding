#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,k;
    cin>>t;
    for(int i=1; i<=t; i++)
    {

        cin>>k;
        cout<<"Case "<<i<<": ";
        for(int j=1; j<=k/2; j++)
        {

            if(k%j==0)cout<<j<<" ";
        }
        cout<<k<<endl;
    }
    return 0;
}
