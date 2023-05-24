#include<iostream>
#include<vector>
using namespace std;

int solve(int *arr,int target,int n){
	if(target==0){
		return 0;
	}
	if(target<0){
		return INT_MAX;
	}
	int mini=INT_MAX;
	for(int i=0;i<n;i++){
	int ans=solve(arr,target-arr[i],n);
	   if(ans!=INT_MAX){
	   	mini=min(mini,ans+1);
	   }
	}
	return mini;
}



int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		int temp;
		cin>>arr[i];
	
	}	

int target;
cin>>target;
int ans=solve(arr,target,n);
cout<<ans;


 return 0;
}

