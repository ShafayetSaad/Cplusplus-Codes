#include <bits/stdc++.h>
using namespace std;

bool isPow2(int n){
	if(n==0){
		return false;
	}
	return (n & (n-1)) == 0;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << isPow2(128) << endl;
	cout << isPow2(144) << endl;
	
	return 0;
}	