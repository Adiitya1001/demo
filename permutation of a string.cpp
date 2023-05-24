#include<iostream>
using namespace std;

void solve(string& s,int i){
	if(i>=s.length()){
		cout<<s<<endl;
		return;
	}
	for(int j=i;j<s.length();j++){
		swap(s[i],s[j]);
		solve(s,i+1);
		swap(s[i],s[j]);
	}
	}


int main() {
string s;
cin>>s;
string output;
solve(s,0);




 return 0;
}

