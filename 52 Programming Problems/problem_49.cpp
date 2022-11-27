#include <bits/stdc++.h>
using namespace std;

int isPrime(long long n){
	if(n<2){
		return 0;
	}
	if(n==2) return 1;
    for(long long i=2; i<=sqrt(n); i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(n<=20){
			if(isPrime(n)){
				cout << n << " is a prime" << endl;
			}
			else{
				cout << n << " is not a prime" << endl;
			}
			continue;
		}
		if(n%2==0){
			cout << n << " is not a prime" << endl;
			continue;
		}
		if(n%3==0){
			cout << n << " is not a prime" << endl;
			continue;
		}
		if(n%5==0){
			cout << n << " is not a prime" << endl;
			continue;
		}
		if(n%7==0){
			cout << n << " is not a prime" << endl;
			continue;
		}
		if(n%11==0){
			cout << n << " is not a prime" << endl;
			continue;
		}
		if(n%13==0){
			cout << n << " is not a prime" << endl;
			continue;
		}
		if(n%17==0){
			cout << n << " is not a prime" << endl;
			continue;
		}
		if(n%19==0){
			cout << n << " is not a prime" << endl;
			continue;
		}
		if(isPrime(n)){
				cout << n << " is a prime" << endl;
			}
		else{
			cout << n << " is not a prime" << endl;
		}
	}
	return 0;
}	