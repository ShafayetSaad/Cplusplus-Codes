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
		int count[26]{0};
		string str;
		cin >> str;
		for(int i=0;i<str.size();i++){
			count[str[i]-'a']++;
		}
		char start = 'a';
		for(auto pr : count){
			if(pr!=0)
				cout << start << ' ' << pr << endl;
			start++;
		}
		cout << endl;
	}
	return 0;
}	