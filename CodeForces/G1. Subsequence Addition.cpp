#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	int aa = t;
	while(t--){
		ll n; cin >> n;
		vector<ll> vr(n);
		for(ll i=0; i<n; i++) cin >> vr[i];
		sort(vr.begin(), vr.end());

		// for(ll i=0; i<n; i++){
		// 	cout << vr[i] << " ";
		// }cout << "|";
		
		if(vr[0] != 1){
			cout << "NO\n";
			continue;
		}

		bool ans = true;

		ll sum=vr[0];
		for(ll i=1; i<n; i++){
			if(sum < vr[i]){
				ans = false;
				break;
			}
			sum += vr[i];
		}

		if(ans) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}	
/*
3
3
1 2 7 
5
1 1 2 4 5 
4
1 1 10 11
*/