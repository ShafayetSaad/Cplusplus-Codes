#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, b; cin >> a >> b;
	int ct=0;
	while(a<=b){
		ct++;
		a = 3*a;
		b = 2*b;
	}
	cout << ct << endl;
	return 0;
}	