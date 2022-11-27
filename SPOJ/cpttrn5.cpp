#include <iostream>
using namespace std;

void pattern(int row, int column, int hight){
    row = hight*row+row;
    column = column*hight+column;

    int count = 1;

    for(int i=0;i<row;i++){
        int j_count = 1;

        for(int j=0;j<=column;j++){
            if(i>0 && j>0 && i<row && j<column){

                if(j%(hight+1)==0){
                    j_count = j_count+1;
                }

                if(i%(hight+1)==0 || j%(hight+1)==0){
                    cout << "*";
                }
                else{

                    cout << j_count;

                    if(j_count%2==0){
                        if(count%2==0){
                        // cout << ".";
                        }
                        else{
                            // cout << "/";
                        }
                    }


                    else{
                        if(count%2==1){
                            // cout << ".";
                        }
                        else{
                            // cout << "\\";
                        }
                    }
                    count++;

                }


            }

            else{
                cout << "*";
            }
        }
        count--;
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
        int a, b, c;
        cin >> a >> b >> c;
        // pattern(a, b, c);
        // cout << endl;
    }

    pattern(4, 4, 2);

    return 0;
}
