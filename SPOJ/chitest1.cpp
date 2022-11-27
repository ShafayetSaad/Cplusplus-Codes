#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        float a, b;
        cin >> a >> b;
        cout << a+b << endl;
    }

    return 0;
}
