#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	for(int k=1; k<=t; k++){

		int n; cin >> n;
		vector<int> va(n+1, 0);
		vector<int> vb(n+1, 0);
		for(int i=1; i<=n; i++) cin >> va[i];
		for(int i=1; i<=n; i++) cin >> vb[i];

		for(int i=1; i<=n; i++){
			if(va[i] > vb[i]) swap(va[i], vb[i]);
		}
		if(va[n] == *max_element(va.begin(), va.end()) && vb[n] == *max_element(vb.begin(), vb.end())){
			cout << "YES\n";
		}
		else cout << "NO\n";

	}
	return 0;
}	