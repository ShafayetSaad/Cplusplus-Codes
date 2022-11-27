#include <iostream>
using namespace std;


int factorial(int num){
    int fact = 0;
    num = num-(num%5);
    while(num>=5){
        fact = fact + num/5;
        num = num/5;
    }
    return fact;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // int n;
    // cin >> n;
    // for(int i=0;i<n;i++){
    //     int num;
    //     cin >> num;
    //     cout << factorial(num) << endl;
    // }

    cout << factorial(100) << endl;


    return 0;
}
