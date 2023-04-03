#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int arr[n+1];
	for(int i=1; i<=n; i++) cin >> arr[i];
	vector<int> a, b, c;
	for(int i=1; i<=n; i++){
		if(arr[i]==1) a.push_back(i);
		else if(arr[i]==2) b.push_back(i);
		else c.push_back(i);
	}
	int ans = min(a.size(), min(b.size(), c.size()));
	cout << ans << endl;
	for(int i=0; i<ans; i++){
		cout << a[i] << " " << b[i] << " " << c[i] << endl;
	}

	return 0;
}	