#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t, n, x;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n];
		arr[0] = 1;
		for(int i=0; i<n-1; i++){
			cin >> x;
			if(x==0) arr[i+1] = arr[i];
			else if(x==1) arr[i+1] = arr[i] + 1;
			else arr[i+1] = arr[i] - 1;
		}
		for(int i=0; i<n; i++){
			cout << arr[i] << " ";
		}cout << endl;
	}
	return 0;
}	