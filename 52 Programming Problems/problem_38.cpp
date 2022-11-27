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
		for(int i=1;i<=a;i++){
			for(int j=1;j<=i;j++){
				cout << b << " ";
			}
			cout << endl;
		}
		for(int i=a-1;i>0;i--){
			for(int j=0;j<i;j++){
				cout << b << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}	