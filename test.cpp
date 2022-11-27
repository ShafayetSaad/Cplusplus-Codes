#include <bits/stdc++.h>
using namespace std;

void fun(string &&s){
	cout << s;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// string text = "geeksforgeek";\
	// string pat = "geek";
	// int start = 0;
	// int end = text.length()-1;
	// int len = pat.length();
	// while(true){
	// 	int index = text.find(pat, start);
	// 	if(index == string::npos){
	// 		break;
	// 	}else{
	// 		cout << "Pattern found at: " << index << endl;
	// 		start =index+1;
	// 	}
	// }
	
	int n = 5;
	for(int i=1;i<n;i++){
		char ch = 'A';
		for(int j=1;j<=i;j++){
			cout << ch;
			ch++;
		}
		if(ch>'A'){
			ch--;
		}
		for(int j=1;j<=i;j++){
			cout << ch;
			ch--;
		}
		cout << endl;
	}

	return 0;
}	