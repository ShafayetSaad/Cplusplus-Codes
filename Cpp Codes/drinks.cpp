#include <iostream>
using namespace std;

int main(){
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	
	int n;
	cin >> n;

	float arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	// This is main logic
	float fraction = 0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			continue;
		}

		//This works
		// float x = 100/arr[i];
		// fraction = fraction + (1/x);

		// Also this works
		fraction += (arr[i]);
	}

	cout << (fraction/n) << endl;

	return 0;
}	