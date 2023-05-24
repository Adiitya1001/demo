#include<iostream>
using namespace std;

int solve(int n,int x,int y, int z){
	if(n==0){
		return 0;
	}
	if(n<0){
		return INT_MIN;
	}
	int maxi=INT_MIN;
		int ans=solve(n-x,x,y,z)+1;
		int ans1=solve(n-y,x,y,z)+1;
		int ans2=solve(n-z,x,y,z)+1;
		maxi=max(ans,max(ans1,ans2));
//		maxi=max(ans1+1,maxi);
//		maxi=max(ans2+1,maxi);
//	
	return maxi;
}





int main() {
int n;
cin>>n;
int x,y,z;
cin>>x>>y>>z;
int ans=solve(n,x,y,z);
if(ans<0){
cout<<0;	
}
else{
	cout<<ans;
}



 return 0;
}

