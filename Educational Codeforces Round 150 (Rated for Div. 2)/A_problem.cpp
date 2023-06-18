#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 2 || n == 3 || n == 4) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }
    return 0;
}