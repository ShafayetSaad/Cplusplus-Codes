/*
Fast Exponentiation
- Faster way to compute a^n

pow(a, n)
a^n => a.(a^(n/2))^2 if n is odd
	=> (a^(n/2))^2 if n is even
O(log(n))
*/
#include <bits/stdc++.h>
using namespace std;

int pow(int a, int n){
	if(n==0) return 1;

	int subproblem = pow(a, n/2);
	// check if n is odd
	if(n&1) return a*subproblem*subproblem;
	return subproblem*subproblem;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a = 5;
	int n = 3;
	cout << pow(a, n);
	
	return 0;
}	