#include <bits/stdc++.h>
using namespace std;

const int M=1e9+7;
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

int binaryExpIter(int a, int b){
	// a > M --> a = a%M
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

// a <= 10^18: b = 2^1024, M=1e18+7
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

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << binaryExp(2, 4) << endl;
	cout << binaryExpIter(2, 4) << endl;
	cout << binaryExp(2123123, 1231231) << endl;
	cout << binaryExpIter(2123123, 1231231) << endl;
	cout << binaryExp_(2123123, 1231231) << endl;
	return 0;
}	