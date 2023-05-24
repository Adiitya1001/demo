#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

void solve(string& s1,string& s2,int i,int j,int carry,string& ans){
	 if(i<0 && j<0){
	 	if(carry!=0){
	 		ans.push_back(carry+'0');
		 }
	 	return;
	 }
	 int n1=(i>=0 ? s1[i]:'0')-'0';
	 int n2=(j>=0 ? s2[j]:'0')-'0';
	 int sum=n1+n2+carry;
	 int digit=sum%10;
	 ans.push_back(digit+'0');
	 carry=sum/10;
	 
	 solve(s1,s2,i-1,j-1,carry,ans);
}

int main() {

string s1;
string s2;
cin>>s1>>s2;
string ans="";
solve(s1,s2,s1.size()-1,s2.size()-1,0,ans);
reverse(ans.begin(),ans.end());
cout<<ans;




 return 0;
}

