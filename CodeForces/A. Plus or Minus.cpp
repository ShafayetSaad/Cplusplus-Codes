#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		if((a+b)==c) cout << "+\n";
		else cout << "-\n"; 
	}
	return 0;
}	