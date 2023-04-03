#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int m, n; cin >> m >> n;
	vector<vector<int>> vr;
	int t, z, y;
	for(int i=0; i<n; i++){
		cin >> t >> z >> y;
		vr.push_back({t, z, y});
	}
	return 0;
}	