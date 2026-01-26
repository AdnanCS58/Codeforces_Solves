
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int cnt=0;
        cin>>s;
        char x = s[0];
        for(int i=1; i<s.size(); i++){
         if(x!=s[i]){
          cnt=1;
          break;
         }
        }
        if(cnt==1){
            cout<<"YES"<<endl;
            string o = s;
            reverse(o.begin(), o.end());
            if(s==o){
                for(int i=0; i<o.size()-1; i++){
                  if(o[i]!=o[i+1]){
                  swap(o[i],o[i+1]);
                  break;
                  }
                }
            }
            cout<<o<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
