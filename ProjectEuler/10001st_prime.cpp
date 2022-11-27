#include <bits/stdc++.h>
using namespace std;

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

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int count = 0;
	int i = 1;
	while(true){
		if(isPrime(i)){
			count++;
			cout << i << " " << count << endl;
		}
		if(count==10001){
			// cout << i << endl;
			break;
		}
		i++;
	}
	return 0;
}	