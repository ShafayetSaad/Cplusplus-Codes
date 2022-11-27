#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a, b;
        cin >> a >> b;

        int count = 1;
        for(int j=1;j<=a;j++){
            for(int k=1;k<=b;k++){
                // Logic
                if(b==1 && count%2==0){
                    cout << '.';
                    break;
                }
                else if(b==1 && count%2==1){
                    cout << '*';
                    break;
                }

                if(count%2==0){
                    cout << '.';
                    count++;
                }
                else if(count%2==1){
                    cout << '*';
                    count++;
                }
                if(k==b && b%2==1){
                    count--;
                }
            }
            count++;
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
