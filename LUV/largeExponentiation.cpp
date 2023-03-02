#include <bits/stdc++.h>
using namespace std;

const int M=1e9+7;


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


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	return 0;
}	