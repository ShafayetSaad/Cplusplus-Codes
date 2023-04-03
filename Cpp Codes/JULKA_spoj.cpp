#include <bits/stdc++.h>
using namespace std;

void increment(vector<int> &a){
    int n = a.size();
    int i;
    for(i=0; i<n && a[i] == 9; i++) a[i] = 0;
    if(i==n) a.push_back(1);
    else a[i]++;
}

void addition(vector<int> &a, vector<int> &b){
    int len = a.size();
    int carry = 0;
    int i, x;
    for(i=0; i<len; i++){
    	// cout << carry << endl;
    	if(i >= b.size()){
    		x = a[i]+carry;
	        a[i] = x%10;
	        carry = x/10;
    	}
    	else{
            x = a[i]+b[i]+carry;
            a[i] = x%10;
            carry = x/10;
        }
    }
    if(carry){
    	a.push_back(carry);
    }
}

void minus_(vector<int> &a, vector<int> &b){
    int len = b.size();
    int carry = 0, i;
    for(i=0; i<len; i++){
        if((a[i] - b[i] - carry) < 0){
            // cout << a[i] << endl;
            a[i] = (10 + a[i] - b[i] - carry);
            carry = 1;
        }
        else{
            a[i] = (a[i] - b[i] - carry);
            carry = 0;
        }
    }
    while(carry){
        if((a[i]- carry) < 0){
            // cout << a[i] << endl;
            a[i] = (10 + a[i] - carry);
            carry = 1;
        }
        else{
            a[i] = (a[i] - carry);
            carry = 0;
        }
        i++;
    }
    while(a[a.size()-1] == 0) a.pop_back();
}

vector<int> division(vector<int> &a, vector<int> &b){
	vector<int> ans(1, 0);
	while(a.size()!=0){
		increment(ans);
		minus_(a, b);
	}
	return ans;
}

void divide_2(vector<int> &a){
	int len = a.size();
	reverse(a.begin(), a.end());
	int carry = 0;
	for(int i=0; i<len; i++){
		if((a[i]+carry*10)%2 != 0){
			a[i] = (10*carry+a[i])/2;
			carry = 1;
		}
		else{
			a[i] = (10*carry+a[i])/2;
			carry = 0;
		}
	}
	reverse(a.begin(), a.end());
	for(int i=len-1; i>=0; i++){
		if(a[i]==0) a.pop_back();
		else break;
	}
	// reverse(a.begin(), a.end());
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t=10;
	string str1, str2;
	while(t--){
		cin >> str1 >> str2;
		vector<int> a, b;
		for(int i=0; i<str1.size(); i++){
			a.push_back(str1[i]-48);
		}
		for(int i=0; i<str2.size(); i++){
			b.push_back(str2[i]-48);
		}
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		// for(auto x:a) cout << x;
		// cout << " ";
		// for(auto x:b) cout << x;
		// cout << " ";
		
		vector<int> ans;
		minus_(a, b);
		// for(auto x:a) cout << x;
		// cout << " ";
		divide_2(a);
		vector<int> temp(a);
		addition(temp, b);


		// printing
		reverse(a.begin(), a.end());
		reverse(temp.begin(), temp.end());
		for(auto x:temp) cout << x;
		cout << endl;
		for(auto x:a) cout << x;
		cout << endl;
	}

	return 0;
}	