#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str; cin >> str;
	int ct_0 = 0;
	int ct_1 = 0;
	for(int i=0; i<str.length(); i++){
		if(str[i]=='0'){
			ct_0++;
			ct_1 = 0;
		}
		else{
			ct_1++;
			ct_0 = 0;
		}
		if(ct_0 == 7 || ct_1 == 7){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}	