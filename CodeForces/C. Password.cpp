#include <bits/stdc++.h>
using namespace std;

int fact(int n){
	if(n<=1) return 1;
	int ans = 1;
	for(int i=1; i<=n; i++){
		ans *= i;
	}
	return ans;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t, n; cin >> t;
	int temp = 6;
	while(t--){
		int n; cin >> n;
		int arr[n];
		for(int i=0; i<n; i++) cin >> arr[i];
		int x = 10-n;
		cout << ((fact(x)/(fact(x-2)*fact(2)))*temp) << endl;
	}
	// cout << fact(5);
	return 0;
}	