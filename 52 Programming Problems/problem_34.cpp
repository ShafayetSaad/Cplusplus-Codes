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
		for(int i=1;i<=c;i++){
			if(i%a==0 && i%b==0){
				cout << i << endl;
			}
		}
		cout << endl;
	}
	return 0;
}	