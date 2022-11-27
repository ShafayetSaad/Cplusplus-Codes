#include<iostream>
#include<string>
#include<set>
using namespace std;

long long fact(long long n){
    if(n==1) return 1;
    return n*fact(n-1);
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        set<string> st;
        string str;
        getline(cin, str);
        str.push_back(' ');
        long long count = 0;
        string word;
        for(long long i=0;i<str.size();i++){
            if(str[i] == ' ' && !word.empty()){
                st.insert(word);
                count++;
                word.clear();
                continue;
            }
            word += str[i];
        }
        if(count == st.size()){
            cout << 1 << '/' << fact(count) << endl;
        }
        else{
            long long x = (count - st.size())*2;
            cout << 1 << '/' << (fact(count)/fact(x)) << endl;
        }
    }
    return 0;
}