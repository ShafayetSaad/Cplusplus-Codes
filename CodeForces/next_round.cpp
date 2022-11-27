#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k, ans;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	ans = 0;
	k--;
	for(int i=0;i<n;i++){
		if(arr[i]>0 && arr[i]>=arr[k]){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}	