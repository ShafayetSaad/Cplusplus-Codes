#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str = "Hello world";
	string str2;
	cout << str << endl;
	// cin.ignore();
	getline(cin, str);
	getline(cin, str2);
	cout << str << endl;
	cout << str2 << endl;
	cout << str.size() << endl;
	str.push_back('A');
	cout << str << endl;
	string num;
	cin >> num;
	int last_digit = num[num.size() - 1] - '0';
	cout << last_digit << endl;
	return 0;
}	