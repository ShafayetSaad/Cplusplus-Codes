#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	map<int, set<string>> m;
	int n;
	cin >> n;
	// while(n--){
	// 	string str;
	// 	int mark;
	// 	cin >> str >> mark;
	// 	m[mark].insert(str);
	// }
	// auto it = (--m.end());
	// while(true){
	// 	auto &students = (*it).second;
	// 	int marks = (*it).first;
	// 	for(auto student : students){
	// 		cout << student << " " << marks << endl;
	// 	}
	// 	if(it==m.begin()) break;
	// 	it--;
	// }


	while(n--){
		string str;
		int mark;
		cin >> str >> mark;
		m[mark*(-1)].insert(str);
	}

	for(auto &marks_student : m){
		auto &students = marks_student.second;
		int marks = marks_student.first;
		for(auto student : students){
			cout << student << " " << -1*marks << endl;
		}
	}

	cout << "Holaa";

	return 0;
}	