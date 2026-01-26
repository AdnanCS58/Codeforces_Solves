#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int max=1e9+10,min=0,count=0;
        int j=0,o=0,arr[105];
        while(n--){
            long long int a,x;
            cin>>a>>x;
            if(a==1){
                if(min<x)min=x;
            }
            else if(a==2){
                if(max>x)max=x;
            }
            else {
                arr[j]=x;
                j++;
            }
        }
        for(int i=0; i<j; i++){
            if(arr[i]>=min && arr[i]<=max)o++;
        }
        if(max<min)cout<<count<<endl;
        else {
            count = ((max+1)-min)-o;
            cout<<count<<endl;
        }
    }
    return 0;
}
