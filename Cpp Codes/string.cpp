#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	string str_0;
	// Will get the first word
	// cin >> str;
	// cout << str << endl;

	// Declaring the string
	string str_1(5, 'S');
	cout << str_1 << endl;

	string name = "Shafayet Sadi";
	cout << name << endl;

	string str_line;
	getline(cin, str_line);
	cout << str_line << endl;

	string s1 = "fam", s2 = "ily";
	cout << s1+s2 << endl;
	cout << s1 << endl;
	
	// s1.append(s2);
	s1 = s1+s2;

	cout << s1 << endl;
	// s1.clear();
	// cout << s1 << "Hola"<< endl;

	cout << s1.compare(s2) << endl;
	// s1.clear();
	cout << s1.empty() << endl;

	string str = "nincompoop";
	// str.erase(3, 3);
	cout << str.find("poo") << endl;
	cout << str << endl;
	str.insert(3, "lol");
	cout << str << endl;
	cout << str.size() << endl;
	cout << str.length() << endl;

	cout << str.substr(3, 6) << endl;

	string num = "786";
	int n = stoi(num);
	cout << n+2 << endl;

	cout << to_string(n) + "2" << endl;

	string str_5 = "kcjfgauiobhsrzejtgfjgi";
	cout << str_5 << endl;

	// sort is from algorithm header file
	sort(str_5.begin(), str_5.end());
	cout << str_5 << endl;
	return 0;
}	