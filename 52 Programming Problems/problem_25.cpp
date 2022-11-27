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
		// This is not time friendly
		long long a, b;
		cin >> a >> b;
		// cout << "gcd " << __gcd(a, b) << endl;
		long long ans = a*b;
		// long long ans = max(a, b);
		// for(long long i = ans;i<=a*b;i++){
		// 	if(i%a==0 && i%b==0){
		// 		ans = i;
		// 		break;
		// 	}
		// }
		// cout << "LCM = " << ans << endl;

		// Finding GCD
		// LMC = (a*b)/GCD
		long long div = 2;
		long long gcd = 1;
		while(true){
			if(div>a || div>b){
				break;
			}
			if(a%div==0 && b%div==0){
				gcd *= div;
				a = a/div;
				b = b/div;
			}
			div++;

		}
		cout << "LCM = " << ans/gcd << endl;

	}
	return 0;
}	