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
	int n = 10;
	vector<int> fb;
	fb.push_back(0);
	fb.push_back(1);
	for(int i=2;i<n;i++){
		fb.push_back(fb[i-1]+fb[i-2]);
	}
	for(int i=0;i<n;i++){
		cout << fb[i] << " ";
	}
	cout << endl;
	for(int i=0;i<n;i++){
		cout << fib(i) << " ";
	}
	return 0;
}	