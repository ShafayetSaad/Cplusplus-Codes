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
		vector<char> vowel;
		vector<char> consonent;
		string str;
        getline(cin, str);
        for(int i=0;i<str.size();i++){
        	if(str[i] == ' ' || str[i] == '.') continue;
        	else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
        		vowel.push_back(str[i]);
        	}
        	else{
        		consonent.push_back(str[i]);
        	}
        }
        for(auto v : vowel){
        	cout << v;
        }
        cout << endl;
        for(auto c : consonent){
        	cout << c;
        }
        cout << endl;
	}
	return 0;
}	