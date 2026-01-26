#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,cnt0=0,cnt5=0,actual=0;
    while(n--){
        cin>>a;
        if(a==5)cnt5++;
        else cnt0++;
        if((cnt5*5)%9==0)actual=cnt5;
    }
    if(actual!=0 && cnt0>0){
        while(actual--){
            cout<<"5";
        }
        while(cnt0--){
            cout<<"0";
        }
    }
        else if(cnt0>0)cout<<"0";
        else cout<<"-1";
        cout<<endl;
    return 0;
}
