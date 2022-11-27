#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		vector<int> v1;
		vector<int> v2;
		int m, n, x;
		cin >> m;
		for(int i=0;i<m;i++){
			cin >> x;
			v1.push_back(x);
		}
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> x;
			v2.push_back(x);
		}
		vector<int> ans;
		ans.insert(ans.begin(), v1.begin(), v1.end());
		ans.insert(ans.end(), v2.begin(), v2.end());
		sort(ans.begin(), ans.end());
		for(auto it : ans){
			cout << it << " ";
		}
		cout << endl;
	}
	return 0;
}	