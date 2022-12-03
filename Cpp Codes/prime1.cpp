#include <iostream>
using namespace std;

int primeSieve(int n){
	int prime[n]={0};

	for(int i=2;i<=n;i++){
		if(prime[i]==0){
			for(int j=(i*i);j<=n;j+=i){
				prime[j]=1;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(prime[i]==0){
			cout << i << " ";
		}
	}
	// cout << endl;
	// for(int i=2;i<=n;i++){
	// 	cout << i << " ";
	// }
	// cout << endl;
	// for(int i=1;i<=n;i++){
	// 	cout << i << " ";
	// }
}

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
	cout << endl << endl;
	cout << primeSieve(52) << endl;
	return 0;
}	