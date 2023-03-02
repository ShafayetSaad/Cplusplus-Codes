#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, b, c;
	cin >> a >> b >> c;
	int res = a*(c*(c+1))/2;
	if(res > b)
	cout << res - b << endl;
	else cout << 0 << endl;
	return 0;
}	