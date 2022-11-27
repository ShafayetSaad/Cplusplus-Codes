#include <bits/stdc++.h>
using namespace std;

void func_1(int n){
	if(n==0) return;
	cout << n << endl;
	func_1(n-1);
}

void func_2(int n){
	if(n==0) return;
	func_2(n-1);
	cout << n << endl;
}

int fact(int n){
	if(n==0) return 1;
	return n*fact(n-1);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	func_1(5);
	func_2(5);
	cout << fact(5) << endl;

// Time complexity
// 1. Number of function calls --> n
// 2. What is complexity of each function --> O(1)
// O(n*1) == O(n)
	return 0;
}	