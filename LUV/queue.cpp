/*
Queue - FIFO - first in first out
- push
- pop
- front

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	queue<string> q;
	q.push("abc");
	q.push("efg");
	q.push("hij");
	q.push("klm");
	q.push("mop");

	while(!q.empty()){
		cout << q.front() << endl;
		q.pop();
	}

	return 0;
}	