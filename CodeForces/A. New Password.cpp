#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k; cin >> n >> k;
	string str = "";
	char arr[k];
	for(int i=0; i<k; i++){
		arr[i] = 97+i;
	}
	for(int i=0; i<n; i++){
		str += (arr[i%k]);
	}
	cout << str << endl;
	return 0;
}	