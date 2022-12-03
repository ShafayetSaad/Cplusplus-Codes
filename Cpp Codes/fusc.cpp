#include <iostream>
#include <climits>
using namespace std;

// 0, 1, 1, 2, 1, 3, 2, 3, 1, 4
// 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
int fusc(int n){
	if(n<2){
		return n;
	}
	else if(n%2==0){
		n = fusc(n/2);
	}
	else{
		n = fusc((n-1)/2) + fusc((n+1)/2);
	}
	return n;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	int arr[n];
	arr[0] = 0;
	arr[1] = 1;
	for(int i=0;i<n;i++){
		arr[i] = fusc(i);
	}

	/*
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	for(int i=0;i<n;i++){
		cout << i << " ";
	}
	cout << endl;
	
	int maxNum=INT_MIN;

	for(int i=0; i< n; i++){
	maxNum=max(maxNum, arr[i]);

	}

	cout << maxNum << endl;

*/
	cout << "Hello" << endl;
	return 0;
}