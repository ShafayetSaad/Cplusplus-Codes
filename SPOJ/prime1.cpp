#include <iostream>
using namespace std;

int isPrime(long long n){
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	if(n%2==0){
		return 0;
	}
	for(long long i=3;i*i<=n;i++){
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
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a, b;
		cin >> a >> b;

		for(long long j=a;j<=b;j++){
			// cout << j << endl;
			if(isPrime(j)){
				cout << j << endl;
			}
		}
		cout << endl;
	}
	return 0;
}	