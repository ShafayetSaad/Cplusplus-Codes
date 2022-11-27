#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << "W";
    for(int i=0;i<n;i++){
        cout << "o";
    }
    cout << "w" << endl;
    return 0;
}
