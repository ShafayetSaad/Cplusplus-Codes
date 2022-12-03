#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	for(int i=n;i>0;i--){
		for(int j=n;j>i;j--){
			cout << j << " ";
		}

		for(int j=1;j<2*i;j++){
			cout << i << " ";
		}

		for(int j=i+1;j<=n;j++){
			cout << j << " ";
		}
		cout << endl;
	}

	for(int i=2;i<=n;i++){
		for(int j=n;j>=i;j--){
			cout << j << " ";
		}
		for(int j=1;j<=2*i-2;j++){
			cout << i << " ";
		}
		for(int j=i+1;j<=n;j++){
			cout << j << " ";
		}
		cout << endl;
	}


	return 0;
}	