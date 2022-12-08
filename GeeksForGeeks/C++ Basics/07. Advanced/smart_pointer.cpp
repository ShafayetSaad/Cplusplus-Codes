#include <bits/stdc++.h>
using namespace std;

// Without smart pointer
class Test
{
public:
	int x, y;
	Test(int a=0, int b=0)
	{
		x = a;
		y = b;
		cout << "Constructor called\n";
	}
	~Test()
	{
		cout << "Destructor called\n";
	}
};

class SP
{
	Test *ptr;
public:
	SP(Test *p=NULL) {ptr = p;}
	~SP() {delete ptr;}
	Test &operator*() {return *ptr;}
	Test *operator->() {return ptr;}
};

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << "Main begins\n";
	{
		// Test *p = new Test(10, 20);
		SP sp(new Test(10, 20));
	}
	cout << "Main ends\n";

	return 0;
}	