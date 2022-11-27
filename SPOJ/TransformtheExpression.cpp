#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	vector<char> v;
	stack<char> st;
	while(t--){
		string str;
		cin >> str;
		// cout << str << endl;
		for(int i=0; i<str.size(); i++){
			
		}
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}cout << endl;
	}
	return 0;
}	