#include <bits/stdc++.h>
using namespace std;
#define int long long int

void printDivisors(int n){
	for(int i=1; i*i<=n; i++){
		if(n%i==0){
			cout << i << " ";
			if(i != n/i){
				cout << (n/i) << " ";
			}
		}
	}
}

// There is an efficient way using prime factorizing

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	return 0;
}	