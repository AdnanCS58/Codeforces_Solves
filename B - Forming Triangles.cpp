#include <iostream>
#include <vector>
using namespace std;

long long factorial3(long long num) {
    return (num * (num - 1) * (num - 2)) / 6;
}

long long factorial2(long long num) {
    return (num * (num - 1)) / 2;
}

void compute() {
    long long n;
    cin >> n;

    vector<int> array(n + 1, 0);

    for (long long i = 0; i < n; i++) {
        long long l;
        cin >> l;
        array[l]++;
    }

    long long result = 0;
    long long previous = 0;

    for (long long i = 0; i <= n; i++) {
        if (array[i] >= 3) {
            result += factorial3(array[i]);
        }
        if (array[i] >= 2) {
            result += factorial2(array[i]) * previous;
        }
        previous += array[i];
    }

    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);
    
    long long t;
    cin >> t;
    
    while (t--) {
        compute();
    }

    return 0;
}