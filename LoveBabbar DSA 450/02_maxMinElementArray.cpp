#include <bits/stdc++.h>
using namespace std;

// Time Complexity is big O(n)
pair<int, int> getMinMax(int arr[], int n){
	pair<int, int> ans;
	int mx = max(arr[0], arr[1]);
	int mn = min(arr[0], arr[1]);
	for(int i=2; i<n; i++){
		// cout << mx << " " << mn << endl;
	    if(arr[i] > mx){
	        mx = arr[i];
	    }
	    else if(arr[i] < mn){
	        mn = arr[i];
	    }
	}
	ans.first = mx;
	ans.second = mn;
	return ans;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {22, 14, 8, 17, 35, 3};
	int n = 6;
	// int n;
	// cin >> n;
	// int arr[n];
	// for(int i=0; i<n; i++){
	// 	cin >> arr[i];
	// }
	pair<int, int> p = getMinMax(arr, n);
	cout << p.first << " " << p.second << endl;
	return 0;
}	