#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    int hash[5] = {0};

    cin >> n;

    vector<int> s(n+1);

    for(int i = 1; i <= n; i++)
    {
        cin >> s[i];

        hash[s[i]]++;
    }

    int ans = 0;
    ans += hash[4];
    
    ans += hash[3];
    hash[1] -= hash[3];

    if(hash[2]>1){
        ans += hash[2]/2;
        hash[2] = hash[2]%2;
    }
    
    ans += hash[2];
    hash[1] -= hash[2]*2;


    if(hash[1] > 0)
    {
        ans += hash[1]/4;
    }


    if(hash[1]%4 != 0 && hash[1] > 0){
        ans += 1;
    }

    cout << ans << endl;

        return 0;
}