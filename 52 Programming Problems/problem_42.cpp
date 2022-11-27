#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n==0){
			cout << 1 << endl;
			continue;
		}
		if(n==1){
			cout << 2 << " + "<< 1 << endl;
			continue;
		}

		while(n>1){
			cout << "2^" << n << " + ";
			n--;
		}
		cout << 2 << " + " << 1;
		cout << endl;
	}
	return 0;
}	