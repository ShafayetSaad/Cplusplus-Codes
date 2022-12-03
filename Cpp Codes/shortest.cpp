#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char ch = cin.get();
	int x=0, y=0;
	while(ch != '\n'){
		switch(ch){
			case 'N': y++; break;
			case 'S': y--; break;
			case 'E': x++; break;
			case 'W': x--; break;
		}
		ch = cin.get();
	}

	// 4 cases
	if(x>=0 && y>=0){
		cout << "X: " << x << endl << "Y: " << y << endl;
		for(int i=0;i<x;i++){
			cout << 'N';
		}
		for(int i=0;i<y;i++){
			cout << 'S';
		}

	}
	// sill have 3 cases
	return 0;
}	