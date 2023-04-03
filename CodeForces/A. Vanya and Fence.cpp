#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, h; cin >> n >> h;
	int ct = 0;
	int x;
	while(n--){
		cin >> x;
		if(x > h) ct++;
		ct++;
	}
	cout << ct << endl;

	return 0;
}	