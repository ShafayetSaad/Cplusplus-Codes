#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str;
	cin >> str;
	long long ans = 0;
	for(int i=0; i<str.length(); i++){
		long long product = 1;
		for(int j=i; j<(i+13); j++){
			int x = int(str[j])-48;
			product *= x;
		}
		ans = max(ans, product);
		// cout << product << endl;
	}
	cout << ans << endl;

	return 0;
}	