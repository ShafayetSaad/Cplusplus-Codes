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

		// Trying with vector
		vector<pair<char, int>> vr;
		vector<char> temp;
		string str;
		cin >> str;
		for(int i=0;i<str.size();i++){
			auto it = find(temp.begin(), temp.end(), str[i]);
			if(it != temp.end()){
				int index = it - temp.begin();
				vr[index].second += 1;
				// cout << "Found " << *it << ' ' << index << endl;

			}
			else{
				temp.push_back(str[i]);
				vr.push_back({str[i], 1});
			}
		}

		for(auto &it : vr){
			cout << it.first << " = " << it.second << endl;
		}
		if(t>1){
			cout << endl;
		}
	}
	return 0;
}	