#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> v = {1, 2, 3, 4, 5, 6};
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
	cout << endl;

	// vector<int> ::iterator it = v.begin();
	// cout << *it << endl;
	// cout << *(it+1) << endl;

	// for(it = v.begin(); it != v.end(); it++){
	// 	cout << *it << " ";
	// }
	cout << endl;

	vector<pair<int, int>> v_p ={{1, 1}, {2, 4}, {3, 9}, {4, 16}};
	vector<pair<int, int>> :: iterator it;
	for(it = v_p.begin(); it != v_p.end(); it++){
		// Two ways
		// cout << (*it).first << " " << (*it).second << endl;
		cout << it->first << " " << it->second << endl;
	}
	cout << endl;
	return 0;
}	