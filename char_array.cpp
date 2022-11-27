#include <iostream>
using namespace std;

int main(){
	/*char arr[100] = "apple";
	int i=0;
	while(arr[i]!='\0'){
		cout << arr[i] << endl;
		i++;
	}

	char arr[100];
	cin >> arr;
	cout << arr << endl;
	*/
/*
	int n;
	cin >> n;
	char arr[n+1];
	cin >> arr;
	bool check = 1;
	for(int i=0;i<n;i++){
		if(arr[i] != arr[n-1-i]){
			check = 0;
			break;
		}
	}
	if(check == true){
		cout << "Palindrome" << endl;
	}
	else{
		cout << "Not Palindrome" << endl;
	}
*/
	int n;
	cin >> n;
	cin.ignore();
	char arr[n+1];
	cin.getline(arr, n);
	cin.ignore();

	int i=0;
	int currLen = 0, maxLen = 0;
	int st = 0, end = 0;

	while(true){
		if(arr[i]==' ' || arr[i]=='\0'){
			if(currLen > maxLen){
				maxLen = currLen;
				end = st;
				
			}
			currLen = 0;
			st = i+1;
		}
		else{
			currLen++;
		}

		if(arr[i]=='\0'){
			break;
		}
		i++;
	}
	cout << "maxlen " << maxLen << endl; 
	for(int i=0;i<maxLen;i++){
		cout << arr[end+i];
	}
	cout << endl;
	return 0;
}