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
        int num;
        cin >> num;

        int arr[200];
        arr[0] = 1;
        int m = 1;

        for(int i=1;i<=num;i++){

            int temp = 0;

            for(int index=0;index<m;index++){
                int x = i*arr[index] + temp;
                arr[index] = x%10;
                temp = x/10;
            }

            while(temp>0){
                arr[m++] = temp%10;
                temp = temp/10;
            }
        }

        for(int i=m-1;i>=0;i--){
            cout << arr[i];
        }

        cout << endl;
    }

    return 0;
}
