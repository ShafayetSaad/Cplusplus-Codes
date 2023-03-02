#include <bits/stdc++.h>
using namespace std;

// Time Complexity O(log(min(a, b)))
int gcd(int a, int b){
	if(b == 0) return a;
	gcd(b, a%b);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << gcd(12, 18) << endl;
	cout << gcd(12, 4) << endl;
	cout << gcd(13, 18) << endl;
	cout << __gcd(12, 18) << endl;
	cout << __gcd(12, 4) << endl;
	cout << __gcd(13, 18) << endl;
	return 0;
}	