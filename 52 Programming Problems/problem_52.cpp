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
		set<int> st;
		cin >> str >> s;
		int len = str.size();
		for(int i=0;i<len;i++){
			int it = str.find(s,i);
			if(it != string::npos){
				st.insert(it);
			}
		}
		cout << st.size() << endl;
	}
	return 0;
}