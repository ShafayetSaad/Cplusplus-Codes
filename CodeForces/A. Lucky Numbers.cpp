#include <bits/stdc++.h>
using namespace std;

int lucky(int n){
	int hi=0, lo=9, rem;
	while(n){
		rem = n%10;
		n /= 10;
		lo = min(lo, rem);
		hi = max(hi, rem);
	}
	return hi-lo;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t, l, r; cin >> t;
	while(t--){
		cin >> l >> r;
		if(l==r) cout << l << endl;
		else if(r<10) cout << r << endl;
		else{
			int ans = 0, res = 0;
			for(int i=r; i>=l; i--){
				if(lucky(i) > ans){
					ans = lucky(i);
					res = i;
				}
				if(ans == 9){
					break;
				}
			}
			cout << res << endl;
		}
	}
	return 0;
}	


