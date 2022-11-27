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
		int n, x;
		int arr[100005] = {0};
		cin >> n;
		for(int i=1;i<n;i++){
			cin >> x;
			arr[x] = 1;
		}
		for(int i=1;i<=n;i++){
			if(arr[i]==0){
				cout << i << endl;
			}
		}
	}
	return 0;
}	