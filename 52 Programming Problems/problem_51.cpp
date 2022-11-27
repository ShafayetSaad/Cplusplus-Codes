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
		string str, s;
		cin >> str >> s;
		cout << str.find(s) << endl;
		// for(int i=0;i<str.size();i++){
		// 	if(str[i]==s[0]){
		// 		int j=i;
		// 		bool flag = true;
		// 		for(int k=0;k<s.size();k++){
		// 			if(str[j]!=s[k]){
		// 				flag = false;
		// 				break;
		// 			}
		// 			j++;
		// 		}
		// 		if(flag){
		// 			cout << i << endl;
		// 			break;
		// 		}
		// 	}
		// }
	}
	return 0;
}	