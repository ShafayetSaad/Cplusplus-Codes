#include <bits/stdc++.h>
using namespace std;

const int N = 2e6+10;
long long arr[N];

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
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		if(n==1){
			cout << "YES" << endl;
			continue;
		}
		int count = 0;
		int min =* min_element(arr, arr+n);
		for(int i=0;i<n-2;i++){
			if(arr[i] == arr[i+1] && arr[i+1] < arr[i+2] && arr[i]<=min){
				cout << "YES" << endl;
				count = 1;
				break;
			}
		}
		if(count == 0){
			cout << "NO" << endl;
		}
	}
	return 0;
}	