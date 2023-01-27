/*
What is the minimum number of people that should be present
in a hall so that there's 50% chance of two people having 
the same birthday?
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	float x = 1.0;
	// x denotes the prob of 2 people have same birthday
	int people = 0;
	float num = 365;
	float denom = 365;
	
	float probability;
	cin >> probability;

	if(p==1.0){
		cout << 366 << endl;
		return 0;
	}

	while(x > (1-probability)){
		// x is less than the threshold
		x = x*(num/denom);
		num--;
		people++;
		cout << "People " << people << " and x " << x << endl;
	}
	cout << people << endl;
	return 0;
}	