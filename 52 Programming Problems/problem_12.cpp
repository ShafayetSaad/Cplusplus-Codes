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
		int count = 0;
		while(n>5){
			count += n/5;
			n /= 5;

		}
		cout << count << endl;
	}
	return 0;
}	