#include <iostream>
#include <vector>
using namespace std;


int multiplication(vector<int> &arr, int a){
    if(arr.size() == 0){
        arr.push_back(1);
    }

    int temp = 0;
    int index = 0;

    for(index=0;index<arr.size();index++){
        int hold = (arr.at(index)*a+temp);
        arr.at(index) = hold%10;
        temp = hold/10;
    }

    while(temp>0){
        arr.push_back(temp%10);
        temp /=10;
        index++;
    }

    return index;

}

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
        vector<int> arr;

        for(int i=1;i<=num;i++){
            multiplication(arr, i);
        }

        for(auto i=arr.end()-1; i >= arr.begin(); i--){
            cout << *i;
        }
        cout << endl;
    }
    return 0;
}
