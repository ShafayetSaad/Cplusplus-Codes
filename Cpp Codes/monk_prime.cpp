#include <bits/stdc++.h>
using namespace std;


int isPrime(long long int n){
	bool flag = false;
	if(n<2){
		return 0;
	}
	if(n==2){
		return 1;
	}
	for(long long int i=2;i<n;i++){
		if(n%i==0){
			flag = true;
			break;
		}
	}
	if(flag){
		return 0;
	}
	return 1;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str;
	cin >> str;
	long long int sum = 0;
	for(int i=0;i<str.size();i++){
		if(isupper(str[i])){
			// cout << (int)str[i] + 32 << endl;
			sum -= (str[i] + 32);
		}
		else{
			// cout << (str[i] - 32) << endl;
			sum += str[i] - 32;
		}
	}
	// cout << abs(sum) << endl;
	cout << isPrime(abs(sum)) << endl;
	return 0;
}	