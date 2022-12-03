#include <iostream>
using namespace std;

int main(){
	char arr[4];
	for(int i=0;i<4;i++){
		cin >> arr[i];
	}
	char a=arr[0], b=arr[1], c=arr[2], d=arr[3];
	if(a==b & c==d){
		cout << "Yes" << endl;
	}
	else if(a==c & b==d){
		cout << "Yes" << endl;
	}
	else if(a==d & b==c){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	return 0;
}	