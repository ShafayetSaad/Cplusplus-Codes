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
		bool flag = false;
		for(int i=0;i<n-1;i++){
			if(arr[i]<arr[i+1]){
				if(i==(n-2)){
					cout << "Yes" << endl;
					flag = true;
				}
				continue;
			}
			else{
				break;
			}
		}
		if(flag==true) continue;
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
				if(i==(n-2)){
					cout << "Yes" << endl;
				}
				continue;
			}
			else{
				cout << "NO" << endl;
				break;
			}
		}
	}
	return 0;
}	