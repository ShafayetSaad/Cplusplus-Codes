#include <bits/stdc++.h>
using namespace std;

// Iterative way
// Time Complexity is big O(n)
void reverseArray(int arr[], int n){
	int start = 0;
	int end = n-1;
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

// Recursive way
// Time Complexity is big O(n)
void _reverseArray(int arr[], int start, int end){
	if(start >= end) return;
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	_reverseArray(arr, start+1, end-1);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {4, 5, 1, 2};
	int n = 4;
	for(auto x : arr){
		cout << x << " ";
	}cout << endl;

	reverseArray(arr, n);
	for(auto x : arr){
		cout << x << " ";
	}cout << endl;

	_reverseArray(arr, 0, n-1);
	for(auto x : arr){
		cout << x << " ";
	}cout << endl;


	return 0;
}	