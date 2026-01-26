#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum=0;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='+'){
                sum+=1;
            }
            else sum-=1;
        }
        cout<<abs(sum)<<endl;
        sum=0;
    }
    return 0;
}