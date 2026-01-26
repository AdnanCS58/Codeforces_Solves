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

const int mxn = 200010;
int SS[mxn];

int dp(int n) {
    int ans = 0;
    string numString = to_string(n);
    for (char digit : numString) {
        ans += (digit - '0');
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < mxn - 1; ++i) {
        SS[i+1] = dp(i+1) + SS[i];
    }

    vector<int> inputs = ii();
    int t = inputs[0];
    for (int i = 0; i < t; ++i) {
        vector<int> M;
        vector<int> input = ii();
        int n = input[0];
        cout << SS[n] << endl;
    }

    return 0;
}
