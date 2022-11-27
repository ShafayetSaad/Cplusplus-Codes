#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> &m){
	cout << m.size() << endl;
	for(auto &pr : m){
		cout << pr.first << " " << pr.second << endl; // O(log(n))
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	map<int, string> mp;
	// kays are unique
	mp[1] = "abc"; // O(log(n))
	mp[5] = "cdc";
	mp[3] = "acd";
	mp[6]; // empty string
	// mp["abcdef"] = "jaflkdfs" // s.size * log(n)
	mp.insert({4, "afg"});
	mp.erase((3)); // O(log(n))

	auto it = mp.find(1);
	mp.erase(it);

	if(it == mp.end()){
		cout << "No value." << endl;
	}
	else{
		cout << "Value is: " << (*it).first << " " << (*it).second << endl;
	}
	it = mp.find(5); // log(n)
	if(it == mp.end()){
		cout << "No value." << endl;
	}
	else{
		cout << "Value is: " << (*it).first << " " << (*it).second << endl;
	}
	// map<int, string> :: iterator it;
	// for(it = mp.begin(); it != mp.end(); it++){
	// 	cout << (*it).first << " " << (*it).second << endl;
	// }
	printMap(mp);
	mp.clear();
	printMap(mp);
	return 0;
}	