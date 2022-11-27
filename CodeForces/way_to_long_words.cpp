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
		if(str.length()>10){
			cout << str[0] << (str.size()-2) << str[str.size()-1] << endl;
		}
		else{
			cout << str << endl;
		}
	}
	return 0;
}