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
        long long int n;
        long long int sum = 0;
        cin >> n;
        for(long long i=1;i<n;i++){
            if(n%i==0){
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
