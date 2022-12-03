#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str1, str2, str;
	cin >> str1 >> str2;
	for(int i=0;i<str1.size();i++){
		bool flag = false;
		for(int j=0;j<str2.size();j++){
			if(str1[i]==str2[j]){
				flag = true;
			}
		}
		if(flag!=true){
			str.push_back(str1[i]);
		}
	}
	cout << str << endl;
	return 0;
}	