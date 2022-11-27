#include <iostream>
#include <string>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    for(int i=0;i<=n;i++){
        string word;
        getline(cin, word);
        if(i==0){
            continue;
        }

        for(int j=0;j<word.length()/2;j+=2){
            cout << word[j];
        }
        cout << endl;

    }
    return 0;
}
