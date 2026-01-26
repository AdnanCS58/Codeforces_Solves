#include <bits/stdc++.h>
using namespace std;



int main()
{
    string s, t;
    cin >> s >> t;

    if (s.size() != t.size()) {
        cout << "NO\n";
        return 0;
    }

    int size = s.size();

    int st=0, en=size-1;
    for (int i = 0; i < size; i++) {
        if (s[st] != t[en]) {
            cout << "NO" << endl;
            break;
        }
        else {
            st++;
            en--;
        }
        if (i == size-1) {
            cout << "YES" << endl;
        }
    }
}
