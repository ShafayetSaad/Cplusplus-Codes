#include <iostream>
#include <cctype>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char ch;
	ch = cin.get(); //Read a single character, even white space
	// cout <<(int) ch << endl;
	if(ch == ' ' || ch == '\n'){
		cout << "Whitespace" << endl;
	}
	else if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
		cout << "Letter" << endl;
	}
	else if(ch>='0' && ch<='9'){
		cout << "Digit" << endl;
	}
	else{
		cout << "Special character" << endl;
	}

	ch = toupper(ch);
	isdigit(ch);
	islower(ch);
	cout << ch << endl;
	return 0;
}	