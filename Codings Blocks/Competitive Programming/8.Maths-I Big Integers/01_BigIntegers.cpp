#include <bits/stdc++.h>
using namespace std;

bool isEqual(vector<int> &a, vector<int> &b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

void increment(vector<int> &a){
    int n = a.size();
    int i;
    for(i=0; i<n && a[i] == 9; i++) a[i] = 0;
    if(i==n) a.push_back(1);
    else a[i]++;
}

void multiply(vector<int> &a, vector<int> &b){
    int n=a.size(), m=b.size();
    vector<int> temp(m+n, 0);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            temp[i+j] += (a[i] * b[j]);
        }
    }
    a.resize(temp.size());
    int carry=0;
    for(int i=0; i<(m+n); i++){
    	a[i] = (carry + temp[i])%10;
    	carry = (carry +  temp[i])/10;
    }
    for(int i=(m+n-1); i>=0 && a[i]==0; i--){
    	a.pop_back();
    }
}

void division(vector<int> &a, vector<int> &b){
	
}


vector<int> factorial(int n){
        // code here
        vector<int> ans, check;
        int rem;
        while(n){
		    rem = n%10;
		    ans.push_back(rem);
		    check.push_back(rem);
		    n /= 10;
        }
        for(int i=ans.size()-1; i>=0; i--){
			cout << ans[i];
		}cout << endl;
        // reverse(ans.begin(), ans.end());
        vector<int> num;
        num.push_back(1);

        while(!isEqual(check, num)){
            multiply(ans, num);
            increment(num);
        }
        return ans;
    }

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> num;
	// increment(num);
	num = factorial(5);
	for(int i=num.size()-1; i>=0; i--){
		cout << num[i];
	}cout << endl;
	return 0;
}	