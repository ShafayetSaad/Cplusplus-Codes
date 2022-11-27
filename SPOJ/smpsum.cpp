#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    long long sum = 0;
    cin >> a >> b;
    for(a;a<=b;a++){
        sum = sum + a*a;
    }
    cout << sum;
    return 0;
}
