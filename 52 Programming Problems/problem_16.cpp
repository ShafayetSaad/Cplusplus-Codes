#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        vector<string> vr;
        string str;
        getline(cin, str);
        str.push_back(' ');
        string word;
        for(long long i=0;i<str.size();i++){
            if(str[i] == ' ' && !word.empty()){
                vr.push_back(word);
                word.clear();
                continue;
            }
            word += str[i];
        }
        
        for(int i=0;i<vr.size();i++){
        	string s = vr[i];
        	if(s.size()==1){
        		cout << s << ' ';
        		continue;
        	}
        	for(int j=s.size()-1;j>=0;j--){
        		cout << s[j];
        	}
        	cout << ' ';
        }
        cout << endl;
    }
    return 0;
}