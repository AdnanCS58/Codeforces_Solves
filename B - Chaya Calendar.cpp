#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int count = 0;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    count = arr[0];
    for (int i = 1; i < n; i++)
    {
        int x=2;
        if(arr[i]>count)count=arr[i]; 
        else {
            int y = arr[i];
            while(count>=y){
            y = arr[i]*x;
            x++;
        }
        count=y;
        }
    }
    cout << count << endl;
  }
  return 0;
}
