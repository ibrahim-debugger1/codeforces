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
        int x;
        cin >> x;
        int xx = x;
        int temp = x, sensor1 = 0, curr = x;
        cout << "1";
        for (int i = 1; i < n; i++) {
            cin >> x;
            if (sensor1 == 0 && x >= curr) {
                cout << "1";
                curr = x;
            } else {
                if (sensor1 == 0 && x <= temp) {
                    cout << "1";
                    curr = x;
                    sensor1 = 1;
                } else if (sensor1 == 1 && x <= temp && x >= curr) {
                    cout << "1";
                    curr = x;
                } else {
                    cout << "0";
                }
            }
        }
        cout << endl;
    }
    return 0;
}