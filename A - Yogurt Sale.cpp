#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int x = a*n,y;
        if(n==1)y = INT_MAX;
        else if(n>2 && n%2==0){
            y = b*(n/2);
        }
        else if(n>2 && n%2!=0){
            y = b*(n/2)+a;
        }
        else if(n==2){
            y = b;
        }
        if(x<y)cout<<x<<endl;
        else cout<<y<<endl;
    }
}
