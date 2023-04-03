#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	ll a, b, c, elev1, elev2;
	while(t--){
		cin >> a >> b >> c;
		if(a==1){
			cout << 1 << endl;
		}
		else{
			elev1 = a-1;
			elev2 = abs(c-b) + abs(c-1);
			if(elev1 < elev2) cout << 1 << endl;
			else if(elev2 < elev1) cout << 2 << endl;
			else cout << 3 << endl;
		}
	}
	return 0;
}	