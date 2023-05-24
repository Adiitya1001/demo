#include<iostream>
using namespace std;

void solve(string&s ,int i,int j){
	if(i>=j){
		return;
	}
	swap(s[i],s[j]);
	solve(s,i+1,j-1);
}

int main() {

string s;
cin>>s;
solve(s,0,s.size()-1);
cout<<s;




 return 0;
}

