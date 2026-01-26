#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int temp;
        string c;
        cin>>temp;
        int arr[temp+1];
        for(int i=1; i<=temp; i++){
        cin>>c;
        if(c[0]=='#')arr[i]=1;
        if(c[1]=='#')arr[i]=2;
        if(c[2]=='#')arr[i]=3;
        if(c[3]=='#')arr[i]=4;
        }
        for(int i=temp; i>=1; i--){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
  return 0;
}