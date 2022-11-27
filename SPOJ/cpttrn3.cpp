#include <iostream>
using namespace std;

void pattern(int a, int b){
    int row = 3*a;
    int column = 3*b;

    for(int i=0;i<row;i++){
        for(int j=0;j<=column;j++){

            if(i>0 && j>0 && i<row && j<column){
                if(i%3==0 || j%3==0){
                    cout << "*";
                }
                else{
                    cout << ".";
                }

            }

            else{
                cout << "*";
            }
        }
        if(i==row){
            break;
        }
        cout << endl;
    }
    for(int i=0;i<=column;i++){
        cout << '*';
    }
    cout << endl;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    for(int test=0;test<n;test++){
        int a, b;
        cin >> a >> b;
        pattern(a, b);
        cout << endl;
    }

    return 0;
}
