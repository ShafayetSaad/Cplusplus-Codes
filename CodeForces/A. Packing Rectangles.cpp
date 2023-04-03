#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int w, h, n;
	cin >> w >> h >> n;
	int lo = 0, hi = max(max(w, h), n * min(h, w)), mid;
	while(hi - lo > 1){
		mid = lo+(hi-lo)/2;
		if(((mid/w)*(mid/h)) < n) lo = mid+1;
		else hi = mid;
		
	}
	if(((lo/w)*(lo/h)) >= n) cout << lo << endl;
	else cout << hi << endl;
	return 0;
}	