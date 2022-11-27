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
			if(str[i]=='L'){
				str[i] = str[i-1];
			}
			if(str[i]=='R'){
				str[i] = str[i+1];
			}
		}
		cout << str << endl;
	}
	return 0;
}	