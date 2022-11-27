#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;
long long arr[N];

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
		// long long arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		// long long max = *max_element(arr, arr+n);
		// for(int i=0;i<n;i++){

		// 	if(arr[i]==max){
		// 		int mx = -1;
		// 		for(int j=0;j<n;j++){
		// 			if(j==i) continue;
		// 			if(arr[j] > mx){
		// 				mx = arr[j];
		// 			}
		// 		}
		// 		cout << (max-mx) << " ";
		// 	}

		// 	else{
		// 		cout << (arr[i]-max) << " ";
		// 	}
		// }
		// cout << endl;
		int index = max_element(arr, arr+n) - arr;
		int maximum = arr[index];
		for(int i=0;i<index;i++){
			cout << (arr[i] - maximum) << " ";
		} // 1st part done

		// max element
		// int max1 = *max_element(arr, arr+index);
		// if(index==(n-1)){
		// 	cout << (maximum-max1) << endl;
		// 	continue;
		// }
		// int max2 = *max_element(arr+index+1, arr+n);
		// int mx = max(max1, max2);
		// cout << (maximum-mx) << " ";

		long long mx = -1;
		for(int i=0;i<n;i++){
			if(i==index) continue;
			if(arr[i] > mx){
				mx = arr[i];
			}
		}
		cout << (maximum - mx) << " ";
		

		for(int i=index+1;i<n;i++){
			cout << (arr[i] - maximum) << " ";
		}
		cout << endl;
	}
	return 0;
}	