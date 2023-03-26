#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
vector<bool> isPrime(N,true);
vector<int> lp(N), hp(N);
vector<int> divisors[N];

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	isPrime[0] = isPrime[1] = false;
	for(int i=2; i*i<=N; i++){
		if(isPrime[i]){
			lp[i] = hp[i] = i;
			for(int j=i*i; j<N; j+=i){
				isPrime[j] = false;
				hp[j] = i;
				if(lp[j]==0) lp[j] = i;
			}
		}
	}
	for(int i=1; i<100; i++){
		// cout << isPrime[i] << " " << lp[i] << " " << hp[i] << endl;
	}

	int num; cin >> num;
	vector<int> prime_factors;
	while(num > 1){
		int prime_fact = lp[num];
		while(num%prime_fact == 0){
			num /= prime_fact;
			prime_factors.push_back(prime_fact);
		}
	}
	for(int x : prime_factors){
		cout << x << " ";
	}
	cout << endl;

	for(int i=2; i<100; i++){
		for(int j=i; j<100; j+=i){
			divisors[j].push_back(i);
		}
	}
	for(int i=1; i<10; i++){
		for(auto x : divisors[i]){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}	