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
		int a, b, c;
		cin >> a >> b >> c;
		int d = 1;
		for(int i=a;i<=b;i+=d){
			if(i%c==0){
				cout << i << endl;
				d = c;
			}
		}
		cout << endl;
	}
	return 0;
}	