#include<iostream>
using namespace std;

int solve(int arr[],int& n,int& t,int temp){
	if(temp==t){
		return 0;
	}
	if(temp>t){
		return INT_MAX;
	}
	int mini=INT_MAX;
	for(int i=0;i<n;i++){
		int ans=solve(arr,n,t,t+arr[i]);
		if(ans!=INT_MAX){
			mini=min(ans,ans+1);
		}
	}
	return mini;
}

int main() {
//int target;
//cin>>target;
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
	cin>>arr[i];
}
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
int temp=0;
//cout<<solve(arr,n,target,temp);
//cout<<ans;



 return 0;
}

