#include <iostream>
using namespace std;

int revNum(int n){
    int num = 0;
    int temp = 0;
    int power = 1;
    while(n>0){
        temp = n%10;
        // cout << temp << " " << num << " " << power << endl << endl;
        num = num*power + temp;
        power = 10;
        n = n/10;
    }
    return num;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a, b, sum;
        cin >> a >> b;

        sum = revNum(a) + revNum(b);
        cout << revNum(sum) << endl;
    }

    return 0;
}
