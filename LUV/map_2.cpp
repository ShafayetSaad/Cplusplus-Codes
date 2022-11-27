#include <bits/stdc++.h>
using namespace std;

void printMap(unordered_map<int, string> &m){
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
	// Difference
	// inbuilt implementation
	// Time complexity
	// valid keys datatype

	unordered_map<int, string> mp;
	// kays are unique
	mp[1] = "abc"; // O(1)
	mp[5] = "cdc";
	mp[3] = "acd";
	mp[6] = "Hal";
	// auto it = mp.find(5); // O(1)
	// mp.erase(it); // O(1)

	printMap(mp);
	return 0;
}	