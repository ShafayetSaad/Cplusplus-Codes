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
		int n;
		cin >> n;
		vector<string> vr;
		while(n--){
			string str;
			cin >> str;
			vr.push_back(str);
		}
		sort(vr.begin(), vr.end());
		for(auto s : vr){
			cout << s << endl;
		}
	}
	return 0;
}	