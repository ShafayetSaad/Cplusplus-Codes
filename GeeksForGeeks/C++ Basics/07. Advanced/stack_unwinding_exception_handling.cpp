#include <bits/stdc++.h>
using namespace std;

void f1() throw(int)
{
	cout << "f1 begins\n";
	throw 100;
	cout << "f1 ends\n";
}
void f2() throw(int)
{
	cout << "f2 begins\n";
	f1();
	cout << "f2 ends\n";
}
int f3()
{
	cout << "f3 begins\n";
	try{
		f2();
	}
	catch(int i)
	{
		cout << "cought exception\n";
	}
	cout << "f3 ends\n";
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	// try
	// {
	// 	f2();
	// }
	// catch(int i)
	// {
	// 	cout << "cought exception\n";
	// }
	// cout << "Bye\n";

	f3();
	cout << "Bye\n";

	return 0;
}	