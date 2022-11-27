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
		char arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		cout << (int(arr[n-1])-96) << endl;
		
	}
	return 0;
}	