#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    vector<pair<int, int>> pi(n);

    for (int i = 0; i < n; i++)
    {
        cin >> pi[i].first >> pi[i].second;
    }

    sort(pi.begin(), pi.end(), [](auto &a, auto &b)
         {
    if (a.first != b.first)
        return a.first > b.first;  
    return a.second < b.second; });

    k--;

    pair<int, int> result = pi[k];

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (pi[i] == result)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}