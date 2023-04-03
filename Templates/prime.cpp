#include <bits/stdc++.h>
using namespace std;
#define int long long int

// Efficient way to check prime
int isPrime(int n){
	if(n==1){
		return 0;
	}
	if(n==2 || n==3){
		return 1;
	}
	if(n%2==0 || n%3==0){
		return 0;
	}
	for(int i=5;i*i<=n;i+=6){
		if(n%i==0 || n%(i+2)==0){
			return 0;
		}
	}
	return 1;
}

// Efficient way of getting prime factors
void printPrimeFactors(int n){
	if(n<=1) return;

	while(n%2==0){
		cout << 2 << " ";
		n = n/2;
	}

	while(n%3==0){
		cout << 3 << " ";
		n = n/3;
	}

	for(int i=5; i*i<=n; i+=6){
		while(n%i==0){
			cout << i << " ";
			n = n/i;
		}
		while(n%(i+2)==0){
			cout << (i+2) << " ";
			n = n/(i+2);
		}
	}

	if(n>3){
		cout << (n) << endl;
	}
}

// Seive of Eratosthenes
void sieve(int n){
	vector<bool> Prime(n+1, true);
	for(int i=2; i*i<=n; i++){
		if(Prime[i]){
			// Replaced 2*i with i*i
			for(int j=i*i; j<=n; j += i){
				Prime[j] = false;
			}
		}
	}
	for(int i=2; i<=n; i++){
		if(Prime[i]){
			cout << i << " ";
		}
	}
}


int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	return 0;
}	