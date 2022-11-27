#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	for(int j=1;j<=t;j++){
		int arr[3];
		for(int i=0;i<3;i++){
			cin >> arr[i];
		}
		sort(arr, arr+3);
		cout << "Case " << j << ": ";
		for(auto &x : arr){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}	