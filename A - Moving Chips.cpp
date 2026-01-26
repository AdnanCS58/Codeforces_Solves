#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int x = 0,y=0, fi, li;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (x == 0 && arr[i] == 1)
            {
                x = 1;
                fi = i;
            }
            else if (arr[i] == 1)
            {
                li = i;
                y=1;
            }
        }
        int count = 0;
        if(y!=0){
        for (int j = fi; j < li; j++)
        {
            if (arr[j] == 0)
                count++;
        }
        }

        cout<<count<<endl;
    }
}
