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
        int n, x, y;
        cin >> n >> x >> y;
        for(int j=2;j<n;j++){
            if(j%x==0 && j%y!=0){
                cout << j << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
