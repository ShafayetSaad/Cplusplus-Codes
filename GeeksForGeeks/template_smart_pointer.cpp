#include <bits/stdc++.h>
using namespace std;

template<class T>
class SP
{
	T *ptr;
public:
	SP(T *p=NULL) {ptr = p;}
	~SP() {delete ptr;}
	T &operator*() {return *ptr;}
	T *operator->() {return ptr;}
};

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	SP<int> sp(new int());
	*sp = 20;
	cout << *sp << endl;
	int n = '0';
	cout << int(n);
	return 0;
}	