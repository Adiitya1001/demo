#include<iostream>
using namespace std;

void solve(string& s,char x,int& ans,int i){
	if(i>=s.size()){
		return;
	}
	if(s[i]==x){
		ans=i;
	}
	solve(s,x,ans,i+1);
}

int main() {
string s;
cin>>s;
int ans=-1;
char x;
cin>>x;
solve(s,x,ans,0);
cout<<ans; 



 return 0;
}

