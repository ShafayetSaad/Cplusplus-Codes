#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    if((a==1 && b==1) || (a==0 && b==0)){cout << 0;}
    else{cout << 1;}
    return 0;
}
