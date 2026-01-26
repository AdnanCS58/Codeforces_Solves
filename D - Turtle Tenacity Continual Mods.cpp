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
   }
   int count=0,div=0,x = *min_element(arr,arr+n);
    for(int i=0; i<n; i++){
        if(arr[i]==x)count++;
        if(arr[i]%x!=0)div++;
    }
    if(count==1)cout<<"YES"<<endl;
    else if(count>1 && div>0)cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
    }
   
}
