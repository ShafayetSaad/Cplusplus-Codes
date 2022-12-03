#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	// Main logic
	int biceps = 0, chest = 0, back = 0;
	for(int i=0;i<n;i+=3){
		chest += arr[i];
	}
	for(int i=1;i<n;i+=3){
		biceps += arr[i];
	}
	for(int i=2;i<n;i+=3){
		back += arr[i];
	}

	// Output
	// cout << biceps << ' ' << chest << ' ' << back << endl;
	if (biceps>chest && biceps>back){
		cout << "biceps";
	}
	else if(chest>biceps && chest>back){
		cout << "chest";
	}
	else if(back>biceps && back>chest){
		cout << "back";
	}
	return 0;
}