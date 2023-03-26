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
		int n;
		cin >> n;
		if(n%2 == 1){
			if(n<5) cout << "NO\n";
			else{
				cout << "YES\n";
				int m = n-2;
				int a = -m/2;
				int b = (m+1)/2;
				for(int i=1; i<=n; i++){
					if(i%2==1) cout << a << " ";
					else cout << b << " ";
				}
				cout << endl;
			}
		}
		else{
			cout << "YES\n";
			for(int i=1; i<=n; i++){
				if(i%2==1) cout << 1 << " ";
				else cout << -1 << " ";
			}
			cout << endl;
		}
	}
	return 0;
}	