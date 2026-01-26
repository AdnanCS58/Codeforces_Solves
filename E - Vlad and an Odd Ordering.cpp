#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> ii() {
    vector<int> result;
    string input;
    getline(cin, input);
    istringstream iss(input);
    int num;
    while (iss >> num) {
        result.push_back(num);
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> inputs = ii();
    int t = inputs[0];
    for (int _ = 0; _ < t; ++_) {
        vector<int> M;
        int n, k;
        vector<int> input = ii();
        n = input[0];
        k = input[1];
        int i = 1;

        while (true) {
            int cur = n / 2 + (n & 1);
            if (cur >= k) {
                cout << (2 * k - 1) * i << endl;
                break;
            } else {
                k -= cur;
                i *= 2;
                n /= 2;
            }
        }
    }

    return 0;
}
