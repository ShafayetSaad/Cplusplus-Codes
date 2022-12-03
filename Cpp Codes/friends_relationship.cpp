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
		int count = 2*n -2;
		for(int i=1;i<=n;i++){
			
			for(int j=0;j<i;j++){
				cout << "*";
			}

			for(int j=count;j>0;j--){
				cout << "#";
			}

			for(int j=0;j<i;j++){
				cout << "*";
			}

			count -= 2;
			cout << endl;
		}
	}
	return 0;
}	