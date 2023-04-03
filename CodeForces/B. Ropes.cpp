#include <bits/stdc++.h>
using namespace std;
#define int long long int

double eps = 1e-8;

int countRope(vector<double> vr, double mid){
	int ct = 0;
	for(int i=0; i<vr.size(); i++){
		ct += floor(vr[i]/mid);
	}
	return ct;
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k; cin >> n >> k;
	vector<double> vr(n);
	for(int i=0; i<n; i++) cin >> vr[i];
	double lo=0, hi=*max_element(vr.begin(), vr.end()), mid;
	while(hi-lo > eps){
		mid = lo + (hi-lo)/2;
		if(countRope(vr, mid) < k) hi = mid;
		else lo = mid;
	}
	// cout << lo << " " << hi << endl;
	cout << fixed << setprecision(20);
	if(countRope(vr, hi) == k) cout << hi << endl;
	else cout << lo << endl;
	// cout << eps << endl;
	return 0;
}	