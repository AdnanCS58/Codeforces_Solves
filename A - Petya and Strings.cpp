#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);

    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            if (s[i] > t[i])
            {
                cout << "1" << "\n";
                return 0;
            }
            else
            {
                cout << "-1" << "\n";
                return 0;
            }
        }
    }
    cout << "0" << "\n";

        return 0;
}