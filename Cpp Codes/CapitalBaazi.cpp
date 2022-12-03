#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string line;
	getline(cin, line);
	for(int i=0;i<line.size();i++){
		if(line[i]==' '){
			cout << '\n';
		}
		else{
			cout << (char)(line[i]-32);
		}
	}
	return 0;
}	

/*
Another sollution

int main(){
	while(true){
		string s;
		cin >> s;
		if(s.size() == 0){
			break;
		}
		for(int i=0;i<s.size();i++){
			s[i] = 'A' + (s[i] - 'a');
		}
		cout << s << endl;
	}
	return 0;
}

*/