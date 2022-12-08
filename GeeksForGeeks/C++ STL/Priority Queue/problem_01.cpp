// Sort array using Priority Queue
#include <bits/stdc++.h>
using namespace std;

// Using max heap
void mySort(int arr[], int n){
	priority_queue<int> pq(arr, arr+n);
	for(int i=n-1; i>=0; i--){
		arr[i] = pq.top();
		pq.pop();
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {12, 5, 8};
	cout << "Hello\n";

	mySort(arr, 3);
	for(auto x : arr){
		cout << x << " ";
	}

	return 0;
}	