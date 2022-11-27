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
        string str;
        getline(cin, str);
        for(int i=str.size()-1;i>=0;i--){
            cout << str[i];
        }
        cout << endl;
        reverse(str.begin(), str.end());
        cout << str << endl;
    }
    return 0;
}