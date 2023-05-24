#include<iostream>
using namespace std;

void solve(int * arr,int n,int sum,int i,int& maxi){
	if(i>=n){
//		cout<<sum<<endl;
maxi=max(sum,maxi);
		return;
	}
	solve(arr,n,sum+arr[i],i+2,maxi);
    solve(arr,n,sum,i+1,maxi);
    
	
}

int main() {
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
	cin>>arr[i];
}
int sum=0;
int maxi=INT_MIN;
solve(arr,n,sum,0,maxi);
cout<<maxi;

 return 0;
}

