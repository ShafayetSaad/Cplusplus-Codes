/*
input: a = {3, 20, 40}
	   b = {2, 10, 12}

output: a = {2, 3, 10}
	    b = {12, 20, 40}
*/

#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int m, int n){
	// Time complexity: big O((m+n)*log(n))
	make_heap(b, b+n, greater<int>());
	for(int i=0; i<m; i++){
		if(a[i] > b[0]){
			pop_heap(b, b+n, greater<int>());
			swap(a[i], b[n-1]);
			push_heap(b, b+n, greater<int>());
		}
	}
	// sort(b, b+n);
	sort_heap(b, b+n);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr1[] = {3, 20, 40};
	int arr2[] = {2, 10, 12};
	merge(arr1, arr2, 3, 3);
	for(auto x : arr1){
		cout << x << " ";
	}cout << endl;
	for(auto x : arr2){
		cout << x << " ";
	}cout << endl;
	return 0;
}	