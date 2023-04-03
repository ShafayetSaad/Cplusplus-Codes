#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	int n, m, x, y;
	while(t--){
		cin >> n >> m;
		for(int i=0; i<m; i++){
			cin >> x >> y;
		}
		if(m < n) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}	