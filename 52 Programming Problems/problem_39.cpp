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
		int i=0;
		for(i=0;i<str.size();i++){
			if(str[i] != str[str.size()-1-i]){
				cout << "Sorry! It is not palindrome!" << endl;
				break;
			}
		}
		if(i==str.size()){
			cout << "Yes! It is palindrome!" << endl;
		}
	}
	return 0;
}	