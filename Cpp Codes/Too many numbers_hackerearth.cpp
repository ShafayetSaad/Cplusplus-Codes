#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, l, r;
	cin >> n >> m;
	cin >> l >> r;
	vector<int> vr;
	int k;
	cin >> k;
	int ct = 0;
	bool flag = false;
	for(int i=l; i<=r; i++){
		if(ct > k){
			flag = true;
			break;
		}
		if(i==m) continue;
		if(n%i == n%m){
			vr.push_back(i);
			ct++;
		}
	}
	cout << ct << endl;
	if(flag){
		cout << -1 << endl;
		return 0;
	}
	for(auto x : vr){
		cout << x << endl;
	}
	return 0;
}	