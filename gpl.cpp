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
		string str;
		cin >> str;
		for(int i=0;i<n;i++){
			int num = int(str[i])-48;
			arr[i] = num;
		}

		long long int number = 0;
		int power = 1;
		for(int i=0;i<n;i++){
			number = number + arr[n-i-1]*power;
			power *= 2;
		}
		cout << number << endl;
	}
	return 0;
}	