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
		long long n;
		cin >> n;
		long long revNum = 0;
		while(n>0){
			revNum = revNum*10+(n%10);
			n = n/10;
		}
		cout << revNum << endl;
	}
	return 0;
}	