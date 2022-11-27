#include <iostream>
#include <cstring>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// char name[]{"Shafayet Sadi"};
	// char company[] = "How are you my boy?";
	// char intern_name[] = {'x', 'y', 'z'}; //very likely to get a garbage
	// char intern__name[] = {'x', 'y', 'z', '\0'}; // This is a currect way
	// cout << name << endl;
	// cout << company << endl;
	// cout << intern_name << endl; //very likely to get a garbage
	// cout << intern__name << endl; // won't get a garbage value
	// cout << strlen(name) << endl;

	char greeting[100];
	// cin >> greeting; // won't get the whole line.only a word because of space
	// cout << greeting << endl;
	// cin.getline(greeting, 100); // will get the full line
	cin.getline(greeting, 100, '.'); //read untill  you ger a dot(.)
	cout << greeting << endl;
	
	return 0;
}	