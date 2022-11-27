#include <bits/stdc++.h>
using namespace std;

int fib(int n){
	if(n==0 || n==1){
		return n;
	}
	return fib(n-1)+fib(n-2);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n=10000;
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	for(int i=2;i<n;i++){
		v.push_back(v[i-1]+v[i-2]);
		if(v[i]>4000000){
			break;
		}
	}
	int sum = 0;
	for(auto x : v){
		cout << x << " ";
		if(x%2==0){
			sum += x;
		}
	}
	cout << endl << sum << endl;
	return 0;
}	