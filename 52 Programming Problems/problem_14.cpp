#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string str;
		getline(cin , str);
		char ch;
		cin >> ch;
		cin.ignore();
		int count = 0;
		// cout << str << endl << ch << endl;
		for(int i=0;i<str.size();i++){
			if(str[i] == ch){
				count++;
			}
		}
		if(count == 0){
			cout << "\'" << ch << "\' is not present" << endl;
		}else{
			cout << "Occurrence of \'" << ch << "\' " << "in \'" << str << "\' = " << count << endl;
		}

	}
	return 0;
}	