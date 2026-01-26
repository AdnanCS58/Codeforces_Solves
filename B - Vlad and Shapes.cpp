#include<bits/stdc++.h>
using namespace std;
int main()
{

   int t;
   cin>>t;
   while (t--)
   {
    int n;
    cin>>n;
    char s;
    int count=0,k=0,m=0;
    for(int i=0; i<n; i++)
    {
        for(int i=0; i<n; i++){
            cin>>s;
            if(s=='1')count++;
        }
        if(k>0){
            if(count==k){
            m=1;
            }
        }
        k=count;
        count=0;
    }
    if(m==1)cout<<"SQUARE"<<endl;
    else cout<<"TRIANGLE"<<endl;
   }
   }
