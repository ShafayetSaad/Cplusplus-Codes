#include <bits/stdc++.h>
using namespace std;

void ceaser_cipher(string str, int key){
	key = key%26;
	int len = str.size();
	for(int i=0; i<len; i++){
		char ch = str[i];
		if(isupper(ch)){
			if((ch+key) > 90){
				cout << char((ch+key)-26);
			}else{
				cout << char(ch+key);
			}
		}
		else{
			if((ch+key) > 122){
				cout << char((ch+key)-26);
			}else{
				cout << char(ch+key);
			}
		}
	}
	cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		int key;
		string str;
		cin >> key >> str;
		ceaser_cipher(str, key);
	}
	return 0;
}	