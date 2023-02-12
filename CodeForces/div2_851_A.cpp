#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int t, x, n, len;
	cin >> t;
	while(t--){
		cin >> n;
		vector<pair<int, int>> vr;
		for(int i=1; i<=n; i++){
			cin >> x;
			if(x==2) vr.push_back({x, i});
		}
		len = vr.size();
		if(len==0){
			cout << 1 << endl;
			continue;
		}
		else if(len%2!=0){
			cout << -1 << endl;
			continue;
		}
		cout << vr[len/2-1].second << endl;
	}
	return 0;
}	