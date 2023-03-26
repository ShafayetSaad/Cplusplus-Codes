#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while(t--){
		int n, q; cin >> n >> q;
		ll arr[n];
		ll sumArr[n]{0};
		for(int i=0; i<n; i++) cin >> arr[i];
		sumArr[0] = arr[0];
		for(int i=1; i<n; i++){
			sumArr[i] += (sumArr[i-1]+arr[i]);
		}
		// for(int i=0; i<n; i++){
		// 	cout << sumArr[i] << " ";
		// }cout << endl;

		for(int i=0; i<q; i++){
			ll l, k, r; cin >> l >> r >> k;
			ll ans = sumArr[n-1] - sumArr[r-1] + sumArr[l-1] - arr[l-1] + k*(r-l+1);
			// cout << ans << endl;
			if(ans%2 == 0) cout << "NO\n";
			else cout << "YES\n";
		}
	}
	return 0;
}	