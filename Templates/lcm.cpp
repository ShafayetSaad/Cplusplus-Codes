#include <bits/stdc++.h>
using namespace std;

// Euclidean Algorithm
// Let a>b
// gcd(a, b) == gcd(a-b, b)
// Time Complexity is big O(log(min(a, b)))
int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b, a%b);
}

// a*b = gcd(a, b)*lcm(a, b)
// Time Complexity is big O(log(min(a, b)))
int lcm(int a, int b){
	return ((a*b)/gcd(a, b));
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << gcd(12, 18) << endl;
	cout << lcm(12, 18) << endl;
	
	return 0;
}	