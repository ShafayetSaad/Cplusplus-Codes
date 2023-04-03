#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m; cin >> n >> m;
	int arr1[n], arr2[m];
	for(int i=0; i<n; i++) cin >> arr1[i];
	for(int i=0; i<m; i++) cin >> arr2[i];
	int arr[n+m];
	int k=0;
	int i=0, j=0;
	while(i<n && j<m){
		if(arr1[i] <= arr2[j]){
			arr[k] = arr1[i]; i++; k++;
		}
		else{
			arr[k] = arr2[j]; j++; k++;
		}
	}
	while(i<n){
		arr[k] = arr1[i]; i++; k++;
	}
	while(j<m){
		arr[k] = arr2[j]; j++; k++;
	}
	for(int i=0; i<m+n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}	