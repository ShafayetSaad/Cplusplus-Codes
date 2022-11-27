#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// int t;
	// cin >> t;
	// cin.ignore();
	// while(t--){
	// 	vector<string> v;
	// 	string str;
	// 	getline(cin, str);
	// 	str.push_back(' ');
	// 	string num;
	// 	for(int i=0;i<str.size();i++){
	// 		if(str[i] == ' '){
	// 			if(num.empty()){
	// 				continue;
	// 			}
	// 			v.push_back(num);
	// 			num.erase();
	// 			continue;
	// 		}
	// 		num += str[i];
	// 	}
	// 	cout << v.size() << endl;
	// }


	//This is a much easier way
	int i, j, n;
    cin >> n;
	
    for(i = 0; i < n; i++)
    {
        int cnt = 1;
        string num;
        cin.ignore();
        getline(cin, num);
		
        for(j = 0; num[j] != '\0'; j++)
            if(num[j] == ' ' && num[j+1] != ' ')
                cnt++;

        cout << cnt << endl;
    }

	return 0;
}	