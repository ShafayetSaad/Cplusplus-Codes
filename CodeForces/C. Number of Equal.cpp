#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m; cin >> n >> m;
	int arr1[n], arr2[m];
	for(int i=0; i<n; i++) cin >> arr1[i];
	for(int i=0; i<m; i++) cin >> arr2[i];
	int i=0, j=0;
	int ct = 0;
	while(i < n && j < m){
		if(arr1[i] == arr2[j]){
			int k=0;
			int temp = arr1[i];
			while(arr1[i] == temp && i<n){
				i++;k++;
			}
			while(arr2[j] == temp && j<m){
				ct+=k; j++;
			}
		}
		else if(arr1[i] > arr2[j]) j++;
		else i++;
	}
	cout << ct << endl;
	return 0;
}	