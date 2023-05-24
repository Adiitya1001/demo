#include<iostream>
using namespace std;

void solve(string& s ,char& x,int& ans,int n){
	if(n<0){
		return;
	}
	if(s[n]==x){
		ans=n;
		return;
	}
	solve(s,x,ans,n-1);
}



int main() {
string s;
cin>>s;
char x;
cin>>x;
int n=s.size()-1;
int ans=-1;
solve(s,x,ans,n);
cout<<ans;



 return 0;
}

