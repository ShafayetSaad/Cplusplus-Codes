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
		int arr[n-1];
		for(int i=0;i<n-1;i++){
			cin >> arr[i];
		}
		for(int i=1;i<=n;i++){
			auto it = find(arr, arr+n-1, i);
			if(it == arr+n-1){
				cout << i << endl;
			}
		}
	}
	return 0;
}	