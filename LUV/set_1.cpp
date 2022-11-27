#include <bits/stdc++.h>
using namespace std;

void printSet(unordered_set<string> &s){
	// Do this
	for(string value : s){
		cout << value << endl;
	}
	// Not this
	// for(auto it = s.begin(); it!=s.end(); it++){
	// 	cout << *it << endl;
	// }
}

void printmSet(multiset<string> &s){
	// Do this
	for(string value : s){
		cout << value << endl;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	unordered_set<string> st;
	st.insert("abc"); // O(1)
	st.insert("efg");
	st.insert("mno");
	st.insert("abc"); // unique element

	auto it = st.find("abc");
	if(it != st.end()){
		cout << *it << endl;
	}

	it = st.find("mno"); // O(1)
	if(it != st.end()){
		st.erase(it); // O(1)
	}

	st.erase("abc");
	printSet(st);

	cout << endl << "Hola" << endl << endl;

	multiset<string> s;
	s.insert("abc"); // O(log(n))
	s.insert("efg");
	s.insert("mno");
	s.insert("abc"); // multiple values

	auto it_m = s.find("abc");
	// if(it_m != s.end()){
	// 	s.erase(it_m); // deletes first value
	// }
	s.erase("abc"); // deletes all values
	printmSet(s);
	return 0;
}	