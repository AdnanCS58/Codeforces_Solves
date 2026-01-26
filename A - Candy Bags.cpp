#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int bags1 = n*n;
    int bags2 = 1;
    
    for(int i=1; i<=n; i++ ){
      for(int j=1; j<=n/2; j++){
        cout << bags2 <<" " << bags1 <<" ";
        bags1--;
      bags2++;
      }
      cout << endl;
    }

    return 0;
}
