#include <bits/stdc++.h>
using namespace std;

// digit sum
int digitSum(int n){
	if(n==0){
		return 0;
	}
	return (n%10) + digitSum(n/10);
}   // Time complexity log(n)


// sum(n, a) = a[n] + sum(n-1, a)
int sum(int n, int arr[]){
	if(n==0){
		return arr[0];
	}
	return arr[n] + sum(n-1, arr);
} 	// Time complexity O(n)

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Sum of array
	int ar[6] = {1, 2, 3, 4, 5, 6};
	cout << sum(5, ar) << endl;
	cout << digitSum(123456) << endl;
	return 0;
}	