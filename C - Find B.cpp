#include <bits/stdc++.h>
using namespace std;
#define int long long
const int g=300005;
int ps[g], sum[g];
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int c[n];
        for (int i = 1; i <= n; i++){
            cin >> c[i];
            ps[i] = ps[i - 1] + c[i];
            sum[i] = sum[i - 1] + (c[i] == 1 ? 2 : 1);
        }
        while (q--)
        {
            int left, right;
            cin >> left >> right;

            if (left == right || ps[right] - ps[left - 1] < sum[right] - sum[left - 1])
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}
