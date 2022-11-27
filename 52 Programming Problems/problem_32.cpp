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
		int a, b;
		cin >> a >> b;
		if(a>b){
			cout << "Invalid!" << endl << endl;
			continue;
		}
		int x = a;
		while(a<b){
			cout << a << endl;
			a = a + x;
		}
		cout << endl;
	}
	return 0;
}	