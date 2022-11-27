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
		int sum = 0;
		for(int i=1;i<n;i++){
			if(n%i==0){
				sum += i;
			}
		}
		if(sum==n){
			cout << "YES, " << n << " is a perfect number!" << endl;
		}
		else{
			cout << "NO, " << n << " is not a perfect number!" << endl;
		}
	}
	return 0;
}	