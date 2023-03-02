#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	/*
	
	1 0 --> 1
	0 1 --> 1
	0 0 --> 0
	1 1 --> 0

	101 = 5
	101 = 5
	000 = 5^5 XOR of same number is zero

	*/
	// Swap two numbers

	int a = 4, b = 6;
	// b = b ^ (a ^ b) ==> b ^ b ^ a = a
	a = a ^ b;
	b = b ^ a; // b --> a

	// a = (a ^ b) ^ a ==> a ^ a ^ b = b
	a = a ^ b; // a --> b
	
	cout << a  <<  ' ' << b << endl;

	/*
	Given an array a of n integers. All integers are
	present in even count except one. Find that one 
	integer which has odd count in O(N) time complexity
	and O(1) space.

	int ans = 0;
	for(int i=0; i<n; i++){
		ans = ans ^ arr[i];
	}
	cout << ans << endl;
	*/

	return 0;
}	