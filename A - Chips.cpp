#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    int fib=0;
    for(int i=1; i<=n; i++) {
         fib += i;
    }
    return fib;
}

int main()
{
    int n,m;
    cin >> n >> m;

    int fib = fibonacci(n);

    int res = m % fib;

    for(int i = 1; i <= n; i++) {
        if(res < i) {
        cout<<res<<endl;
        break;
        }
        else res -= i;
    }

    return 0;
}