#include <bits/stdc++.h>
using namespace std;

void output()
{
    int a;
    cin >> a;
    for (int i = 0; i < 2 * a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if ((i / 2 + j) % 2 == 0)
            {
                cout << "##";
            }
            else
                cout << "..";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        output();
    }
}
