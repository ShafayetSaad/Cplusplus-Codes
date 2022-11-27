#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a;
    cin >> a;
    int arr_a[a];
    for(int i=0;i<a;i++){
        cin >> arr_a[i];
    }
    int b;
    cin >> b;
    int arr_b[b];
    for(int i=0;i<b;i++){
        cin >> arr_b[i];
    }
    int iterate = a;
    if(b>a){ iterate = b;}
    for(int i=0;i<iterate;i++){
        if(arr_a[i] == arr_b[i]){
            cout << i+1 << endl;
        }
    }
    return 0;
}
