#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	vector<int> v = {2, -1, 5};
	// lambda function [](parameters){code}(parameters)
	cout << all_of(v.begin(), v.end(), [](int x){return x > 0;});
	cout << endl;
	cout << any_of(v.begin(), v.end(), [](int x){return x > 0;});
	cout << endl;
	cout << none_of(v.begin(), v.end(), [](int x){return x > 0;});
	return 0;
}	