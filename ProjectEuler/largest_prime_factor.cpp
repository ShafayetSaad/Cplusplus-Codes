#include <bits/stdc++.h>
using namespace std;

int isPrime(long long n){
	if(n<2){
		return 0;
	}
	if(n==2){
		return 1;
	}
	bool flag = true;
	for(long long i=3;i<n;i++){
		if(n%i==0){
			flag = false;
			break;
		}
	}
	if(flag){
		return 1;
	}
	return 0;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long n = 13195;
	n = 600851475143;
	// cout << isPrime(5) << endl;
	for(long long i=2;i<n;i++){
		if(isPrime(i)){
			if(n%i==0){
				cout << i << endl;
			}
		}
	}
	return 0;
}	