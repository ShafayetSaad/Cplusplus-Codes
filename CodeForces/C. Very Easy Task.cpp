#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool check(int n, int x, int y, int mid){
	if(n <= (mid/x + mid/y)) return true;
	else return false;
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x, y;
	cin >> n >> x >> y;
	int ans = min(x, y);
	n--;
	// int ans = 0;
	int lo=0, hi=n*max(x, y), mid;
	while(hi-lo > 1){
		// cout << lo << " " << hi << endl;
		mid = lo + (hi-lo)/2;
		if(check(n, x, y, mid)) hi = mid;
		else lo = mid;
	}
	if(check(n, x, y, lo)) cout << lo+ans << endl;
	else cout << hi+ans << endl;
	return 0;
}	