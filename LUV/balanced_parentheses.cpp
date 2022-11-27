#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	while(t--){
		stack<char> st;
		string str;
		cin >> str;
		int i=0;
		bool flag = false;
		for(i=0;i<str.size();i++){
			if(str[i] == '(' || str[i] == '{' || str[i] == '['){
				st.push(str[i]);
			}
			else{
				if(st.empty()){
					flag = true;
				}
				else{
				if(str[i]==')'){
					if(st.top() == '('){
						st.pop();
					}
					else{
						// cout << "NO" << endl;
						break;
					}
				}
				else if(str[i]=='}'){
					if(st.top() == '{'){
						st.pop();
					}
					else{
						// cout << "NO" << endl;
						break;
					}
				}
				else{
					if(st.top() == '['){
						st.pop();
					}
					else{
						// cout << "NO" << endl;
						break;
					}
				}
			}
		}
		}
		if(flag==true){
			cout << "NO" << endl;
		}
		else if(st.empty()){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
		// }
	}

	return 0;
}	