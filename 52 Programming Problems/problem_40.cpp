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
		int a, n;
		cin >> a >> n;
		if(a==1){
			cout << "Result = "<< ((a*n)+1) << endl;
			continue;
		}
		long long po = pow(a, n);
		long long ans = a*(po-1);
		ans = ans/(a-1) + 1;
		cout << "Result = " << ans << endl;
	}
	return 0;
}	