#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		char ch;
		cin >> ch;
		if(islower(ch)){
			cout << "Lowercase Character" << endl;
		}
		else if(isupper(ch)){
			cout << "Uppercase Character" << endl;
		}
		else if(isdigit(ch)){
			cout << "Numerical Digit" << endl;
		}
		else{
			cout << "Special Characters" << endl;
		}
	}
	return 0;
}	