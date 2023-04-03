#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int M=1e9+7;

// Recursive solution
int binaryExp(int a, int n){
	if(n==0) return 1;
	int res = binaryExp(a, n/2);
	if(n & 1) {
		return (a * ((res *1LL* res)%M))%M;
	}
	else {
		return (res *1LL* res)%M;
	}
}

// Iterative solution
int _binaryExp(int a, int b){
	// if(a > M) --> a = a%M
	int ans = 1;
	while(b){
		if(b&1){
			ans = (ans*1LL*a)%M;
		}
		a = (a*1LL*a)%M;
		b = (b>>1);
	}
	return ans;
}


long long binMultiply(long long a, long long b){
	long long ans = 0;
	while(b){
		if(b&1){
			ans = (ans+a)%M;
		}
		a = (a+a)%M;
		b = (b>>1);
	}
	return ans;
}

// a <= 10^18, b = 2^1024, M=1e18+7
// As M is 1e18+7 --> a*a overflows long long
// This way we can do large exponentiation
//  log^2(N) time complexity
long long binaryExp_(long long a, long long b){
	int ans = 1;
	while(b>0){
		if(b&1){
			ans = binMultiply(ans, a);
		}
		a = binMultiply(a, a);
		b = b >> 1;
	}
	return ans;
}


int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	return 0;
}	