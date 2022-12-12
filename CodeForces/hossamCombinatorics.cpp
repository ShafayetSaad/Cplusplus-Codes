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
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);

		if(arr[0] == arr[n-1]){
			cout << 0 << endl;
			continue;
		}
		int left = count(arr, arr+n, arr[0]);
		int right = count(arr, arr+n, arr[n-1]);
		cout << left << " " << right << endl;
		int ct = 0;
		for(int i=0; i<left; i++){
			ct += right;
		}
		cout << ct*2 << endl;
	}

	return 0;
}	