#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
   int n;
   cin>>n;
   int arr[n],sum=0,k=0;
   for (int i = 0; i < n; i++)
   {
      cin>>arr[i];
      sum+=arr[i]; 
   }
    if(sum%3==0){
        cout<<0<<endl;
    }
    else if(sum%3==2){
        cout<<1<<endl;
    }
    else
    {
            for(int i=0; i<n; i++){
                int temp = sum-arr[i];
                if(temp%3==0){
                    cout<<1<<endl;
                    k=1;
                    break;
                }
            }
        if(k==0)cout<<2<<endl;
    }
    }
   
}
