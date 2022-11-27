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
		long long p, q, c;
		cin >> p >> q >> c;
		long long ans = 1;
		for(int i=1;i<=q;i++){
			ans = ans*p;
			ans = ans%c;
		}
		cout << "Result = " << (ans%c) << endl;
	}
	return 0;
}	