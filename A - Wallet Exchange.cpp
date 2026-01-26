#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if((a%2==0 && b%2==0) || (a%2!=0 && b%2!=0))cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    return 0;
}