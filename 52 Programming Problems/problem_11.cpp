#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long arr[16];
	arr[0] = 1;
	for(int i=1;i<16;i++){
		arr[i] = arr[i-1]*i;
	}
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << arr[n] << endl;

	}
	return 0;
}	