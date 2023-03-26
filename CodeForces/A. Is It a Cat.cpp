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
		string str;
		cin >> str;
		string cat = "meow";
		string ans = "";
		for(int i=0; i<n; i++){
			str[i] = tolower(str[i]);
		}
		// cout << str << endl;
		for(int i=0; i<n; i++){
			char ch = str[i];
			ans += str[i];
			while(ch == str[i+1]) i++;
		}
		// cout << ans << endl;
		if(cat == ans) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}	