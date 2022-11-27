#include <bits/stdc++.h>
using namespace std;

void printSet(set<string> &s){
	// Do this
	for(string value : s){
		cout << value << endl;
	}
	// Not this
	// for(auto it = s.begin(); it!=s.end(); it++){
	// 	cout << *it << endl;
	// }
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	set<string> st;
	st.insert("abc"); // log(n)
	st.insert("efg");
	st.insert("mno");
	st.insert("abc"); // unique element

	auto it = st.find("abc");
	if(it != st.end()){
		cout << *it << endl;
	}

	it = st.find("mno"); // log(n)
	if(it != st.end()){
		st.erase(it); // log(n)
	}

	st.erase("abc");
	printSet(st);

	return 0;
}	