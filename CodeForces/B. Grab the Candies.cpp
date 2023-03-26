#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int arr[n];
		for(int i=0; i<n; i++) cin >> arr[i];
		int evenSum = 0, oddSum = 0;
		for(int i=0; i<n; i++){
			if(arr[i]%2==0) evenSum += arr[i];
			else oddSum += arr[i];
		}
		if(evenSum > oddSum) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}	