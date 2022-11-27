#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	for(int i=1;i<=t;i++){
		int n;
		cin >> n;
		cout << "Case " << i << ": "; 
		for(int j=1;j<=n;j++){
			if(n%j==0){
				cout << j << " ";
			}
		}
		cout << endl;
	}
	return 0;
}	