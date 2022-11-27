#include <bits/stdc++.h>
using namespace std;


int combination(vector<int> vr, int n){
	int vector<vector<int>> v;
	for(int i=0;i<n;i++){
		
	}
}


unordered_map<char, int> symbols = {{'[', -1}, {'(', -2}, 
								{'{', -3}, {']', 1}, {')', 2}, {'}', 3}};

int isBalanced(string s){
	stack<char> st;
	for(char bracket : s){
		if(symbols[bracket] < 0){
			st.push(bracket);
		}else{
			if(st.empty()) return 0;
			char top = st.top();
			st.pop();
			if(symbols[top] + symbols[bracket] != 0){
				return 0;
			}
		}
	}
	if(st.empty()) return 1;
	return 0;
}

int possible(string s){
	int count = 0;
	for(auto &ch : s){
		if(ch == '('){
			count++;
		}
		else{
			count--;
		}
	}
	if(count==0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> ans;
	int n;
	cin >> n;
	string str;
	vector<string> vr;
	vr.push_back("");
	for(int i=1;i<=n;i++){
		cin >> str;
		vr.push_back(str);
	}
	string concated;
	for(int i=1;i<=n;i++){
		concated += vr[i];
	}
	int flag = possible(concated);
	if(flag == 0){
		cout << "impossible" << endl;
	}
	else{
		if(isBalanced(concated)){
			for(int i=1;i<=n;i++){
				cout << i << endl;
			}
		}
		cout << "Try other" << endl;
	}

	return 0;
}	