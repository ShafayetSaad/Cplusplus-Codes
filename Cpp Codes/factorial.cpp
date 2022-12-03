#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fact[0] = fact[1] = 1;
	for(int i=2;i<N;i++){
		fact[i] = fact[i-1] * i;
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << fact[n] << endl;
		// long long fact = 1;
		// for(int i=2;i<=n;i++){
		// 	fact = (fact*i)%M;
		// }
		// cout << fact << endl;
	}
	return 0;
}	