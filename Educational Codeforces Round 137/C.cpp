#include<bits/stdc++.h>
using namespace std;

int  main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin>>t;
	while(t--) {
		int n, ans =0;
		cin>>n;
		string s;
		cin>>s;
		vector<int>v(n);
		for(auto &i : v) cin>>i;
		int lastZero = -1;
		for(int i = 0; i < n; i++) {
			if(s[i] == '1' && lastZero == -1) ans += v[i];
			else if(s[i] == '1' && lastZero >= v[i]) {
				ans += lastZero;
				lastZero = v[i];
			} else if(s[i] == '0'){
				lastZero = v[i];
			} else ans += v[i];
		}
	    cout<<ans<<endl;
	}
	return 0;
}
