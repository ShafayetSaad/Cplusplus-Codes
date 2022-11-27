#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string str;
        getline(cin, str);
        int count = 0;
        for(int i=0;i<str.size();i++){
        	if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
        		count++;
        	}
        }
        cout << "Number of vowels = "<< count << endl;
	}
	return 0;
}	