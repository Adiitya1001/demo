#include<iostream>
using namespace std;

bool palindrome(string& s,int i,int j){
	if(i>=j){
		return 1;
	}
	if(s[i]!=s[j]){
		return 0;
	}
	palindrome(s,i+1,j-1);
	
}

int main() {

	string s;
	cin>>s;
	if(palindrome(s,0,s.size()-1)) {
		cout<<"Yes the string "<<s<<" is a Palindrome";
	} else {
		cout<<"No the string "<<s<<" is not a Palindrome";
	}



	return 0;
}

