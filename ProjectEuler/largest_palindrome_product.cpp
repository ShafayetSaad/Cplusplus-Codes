#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
	int rev = 0;
	int temp = n;
	while(temp!=0){
		rev = rev*10+(temp%10);
		temp /= 10;
	}
	return (rev == n);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n = 1;
	int mx = 1;
	for(int i=100;i<=999;i++){
		for(int j=100; j<=999; j++){
			if(isPalindrome((i*j))){
				n = i*j;
				cout << n << endl;
				mx = max(n, mx);
			}
		}
	}
	cout << mx << endl;
	return 0;
}	