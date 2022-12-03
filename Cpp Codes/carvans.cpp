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
		int count = 1;
		int max = arr[0];
		for(int i=1;i<n;i++){
			if(arr[i] <= max){
				max = arr[i];
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}	