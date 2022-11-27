#include <bits/stdc++.h>
using namespace std;

double fact(double n){
	if(n==1){
		return 1;
	}
	return n*fact(n-1);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		double n;
		cin >> n;
		cout << fixed << setprecision(4);
		if(n<3){
			cout << n << endl;
			continue;
		}
		double ans = 0;
		for(int i=2;i<n;i++){
			ans = ans + (1/fact(i));
		}
		ans = ans + 2.0;
		cout << ans << endl;
	}
	return 0;
}	