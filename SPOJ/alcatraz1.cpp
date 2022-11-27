#include <iostream>
#include <string>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while(t--){
       string str;
       cin>>str;

       long long n=0;

       for(int i=0;i<str.length();i++){
        n = n + (int)str[i]-'0';
       }
       cout << n << endl;
       // cout << (int)str[5] - '0' << endl;
       }
    return 0;
}
