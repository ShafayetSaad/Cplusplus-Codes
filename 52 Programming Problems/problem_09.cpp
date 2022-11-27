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
		auto res = sqrt(n);
		if(res == int(res)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}	