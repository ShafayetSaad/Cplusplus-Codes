#include <iostream>
using namespace std;

void pattern(int row, int column, int hight, int width){
    row = hight*row+row;
    column = column*width+column;


    for(int i=0;i<row;i++){
        for(int j=0;j<=column;j++){

            if(i>0 && j>0 && i<row && j<column){
                if(i%(hight+1)==0 || j%(width+1)==0){
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        pattern(a, b, c, d);
        cout << endl;
    }

    return 0;
}
