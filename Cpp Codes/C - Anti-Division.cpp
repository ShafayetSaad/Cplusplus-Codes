#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	a--;
	int ans = 0;
	ans += (b/c - a/c);
	ans += (b/d - a/d);
	int lcm = (c*d)/__gcd(c, d);
	// cout << lcm << endl;
	ans -= (b/lcm - a/lcm);
	// cout << ans << endl;
	cout << ((b-a) - ans) << endl;
	return 0;
}	