#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, top; cin >> n >> top;
	int a, b;
	int bottom = 7-top;
	bool flag = true;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		if(a==top || a==bottom || (7-a)==top || (7-a) == bottom) flag = false;
		if(b==top || b==bottom || (7-b)==top || (7-b) == bottom) flag = false;
	}
	if(flag) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}	