#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string s,f;
         cin>>s>>f;
         if(s == f){
            cout<<"0"<<endl;
         }
         else{
         long long int x,y;
         x=y=0;
         for(int i=0; i<n; i++){
         if(s[i]=='0' && f[i]=='1')x++;
         else if(s[i]=='1' && f[i]=='0')y++;
         }
         long long int ans = min(x,y)+abs(x-y);
         cout<<ans<<endl;
         }
    }
}