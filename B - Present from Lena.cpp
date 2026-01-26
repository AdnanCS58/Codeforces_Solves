#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=n+1,y=n+1,z=1;
    for(int i=1; i<=n*2+1; i++){
        for(int j=1; j<=n*2+1; j++){
           if(j>=x && j<=y){
            if(j==x || j==y){
                if(j==y)cout<<"0";
                else cout<<"0 ";
                }
            else {
                if(j<n+1){
                    cout<<z<<" ";
                    z++;
                }
                else {
                  cout<<z<<" ";
                  z--;
                }
           }
           }
           else {
            if(j<y)cout<<"  ";
           }
        }
        z=1;
        if(i>n){
            x++;
            y--;
        }
        else{
        x--;
        y++;
        }
        cout<<endl;
    }
    return 0;
}
