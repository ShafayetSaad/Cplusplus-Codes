#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int n){
    if(n<2){
        return 0;
    }
    if(n==2) return 1;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    cout << "Give a number\n";
    int n, i;
    cin >> n;

    bool flag = 0;

    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0){
            cout <<  "Non prime\n";
            flag = 1;
            break;
        }
    }
    /*
    if(n==i){
        cout << "Prime\n";
    }*/
    if(flag==0){
        cout << "Prime" << endl;
    }

    return 0;
}

