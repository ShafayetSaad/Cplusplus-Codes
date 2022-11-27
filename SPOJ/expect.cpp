#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    while(true){
        cin >> n;
        cout << n << endl;
        if(n==42){
            break;
        }
    }
    return 0;
}
