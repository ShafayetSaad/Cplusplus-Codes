#include <bits/stdc++.h>
using namespace std;

const int N = 2e6+10;
long long arr[N];

int inversion(int n){
	int ans = 0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(arr[i] > arr[j]){
				ans++;
			}
		}
	}
	return ans;
}

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
			cout << 0 << endl;
			continue;
		}
		int ans = 0;
		for(int i=0;i<n;i++){
			int temp = arr[i];
			if(arr[i]==0){
				arr[i] = 1;
			}else{
				arr[i] = 0;
			}
			int count = inversion(n);
			if(count > ans){
				ans = count;
			}
			arr[i] = temp;
		}
		cout << ans << endl;
	}
	return 0;
}	