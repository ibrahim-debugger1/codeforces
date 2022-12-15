#include<bits/stdc++.h>
using namespace std;

int  main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>sol;
		for (int i = 1, j = n; i < j; i++, j--) {
			sol.push_back(i);
			sol.push_back(j);
		}
		if (n % 2 == 1)
			sol.push_back(n / 2 + 1);
		for (int i = 0; i < n; i++)
			cout << sol[i] << " ";
		cout << endl;

	}
	return 0;
}

