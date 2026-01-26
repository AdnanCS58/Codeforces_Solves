#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int one = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0'){
            zero++;
            one = 0;
        }
        else{
            one++;
            zero = 0;
        }
        if (one == 7 || zero == 7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}