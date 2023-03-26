#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		int n, x, mx;
		cin >> n;
		mx = -1;
		long long int ans = 0;
		for(int i=0; i<n; i++){
			cin >> x;
			ans += x;
		}
		for(int i=0; i<n; i++){
			cin >> x;
			ans += x;
			mx = max(mx, x);
		}
		cout << ans-mx << endl;
	}
	return 0;
}	