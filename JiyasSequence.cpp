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
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int num = 1;
		for(int i=0;i<n;i++){
			num *= arr[i];
		}
		if(num%10 == 2 || num%10 == 3 || num%10 == 5){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
		cout << num;
	}
	return 0;
}	