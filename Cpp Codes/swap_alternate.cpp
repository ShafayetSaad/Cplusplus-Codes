#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n=7, temp;
	int arr[n] = {1, 2, 7, 8, 5, 6, 9};
	for(int i=0;i<n-1;i+=2){
		// temp = arr[i];
		// arr[i] = arr[i+1];
		// arr[i+1] = temp;
		swap(arr[i], arr[i+1]);
	}
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	// 2 3 1 6 3 6 2
	cout << endl;
	cout << (3^2) << endl;
	return 0;
}	