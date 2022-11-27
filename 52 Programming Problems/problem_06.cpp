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
		int last = n%10;
		while(n>=10){
			n /= 10;
		}
		cout << "Sum = " << last+n << endl;
	}
	return 0;
}	