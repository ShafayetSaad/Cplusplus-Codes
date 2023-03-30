#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n; cin >> n;
	vector<ll> vr(n);
	for(int i=0; i<n; i++) cin >> vr[i];
	sort(vr.begin(), vr.end());
	// for(int i=0; i<n; i++){
	// 	cout << vr[i] << " ";
	// }cout << endl;

	ll k; cin >> k;
	ll l, r;
	for(int i=0; i<k; i++){
		cin >> l >> r;
		auto lo = lower_bound(vr.begin(), vr.end(), l);
		if(lo == vr.end()) cout << 0 << " ";
		else{
			auto hi = upper_bound(vr.begin(), vr.end(), r);
			cout << hi - lo << " ";
		}
	}
	cout << endl;
	return 0;
}	