#include <iostream> 
#include <algorithm> 

using namespace std; 

bool isBetween(int start, int end, int point) { 
    if (start <= end) { 
        return (point >= start && point <= end); 
    } else { 
        return (point >= start || point <= end); 
    } 
} 

bool check(int a, int b, int c, int d) { 
    int start1 = min(a, b); 
    int end1 = max(a, b); 
    int start2 = min(c, d); 
    int end2 = max(c, d); 
    return (isBetween(start1, end1, start2) != isBetween(start1, end1, end2)) || 
           (isBetween(start2, end2, start1) != isBetween(start2, end2, end1)); 
} 

int main() { 
    int t; 
    cin >> t; 

    while (t--) { 
        int a, b, c, d; 
        cin >> a >> b >> c >> d; 

        if (check(a, b, c, d)) { 
            cout << "YES\n"; 
        } else { 
            cout << "NO\n"; 
        } 
    } 

    return 0; 
}
