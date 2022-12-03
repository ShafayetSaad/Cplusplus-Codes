#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// a=97, A=65, Z=90 (-32)
	string name = "ShaFayet Sadi";
	for(int i=0;i<name.length();i++){
		if((int)name[i]>=97){
			name[i] -=32;
		}
	}
	cout << name << endl;

	for(int i=0;i<name.length();i++){
		if((int)name[i]>64 && (int)name[i]<97){
			name[i] +=32;
		}
	}
	cout << name << endl;

	// transform needs algorithm header file
	transform(name.begin(), name.end(), name.begin(), ::toupper);
	cout << name << endl;

	transform(name.begin(), name.end(), name.begin(), ::tolower);
	cout << name << endl;


	string num = "165689435479";
	sort(num.begin(), num.end(), greater<int>());
	cout << num << endl;


	string s_6 = "oigrnivnirlewipodklfoirht";
	int freq[26];
	for(int i=0;i<26;i++){
		freq[i] = 0;
	}
	for(int i=0;i<s_6.size();i++){
		freq[s_6[i]-'a']++;
	}
	char ans = 'a';
	int maxF = 0;
	for(int i=0;i<26;i++){
		if(freq[i]>maxF){
			maxF = freq[i];
			ans = i+'a';
		}
	}
	cout << maxF << "  " << ans << endl;
	return 0;
}	