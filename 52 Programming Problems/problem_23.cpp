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
		string str;
		cin >> str;
		for(int i=0;i<str.size();i++){
			cout << str[i]-64;
		}
		cout << endl;
	}
	return 0;
}