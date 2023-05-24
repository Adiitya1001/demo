#include<iostream>
using namespace std;

void maxi(int arr[],int n,int i,int& maxe) {
	if(i==n) {
		return ;
	}
	if(maxe<arr[i]) {
		maxe=arr[i];
	}
	maxi(arr,n,i+1,maxe);
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	int maxe=INT_MIN;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}

	maxi(arr,n,0,maxe);
	cout<<maxe;

	return 0;
}

