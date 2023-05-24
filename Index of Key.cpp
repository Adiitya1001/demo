#include<iostream>
using namespace std;
int i=0;
int ans=-1;
int key(int arr[],int n,int k){
	if(arr[i]==k){
		return i;
	}
	if(i==n){
		return -1;
	}
	i++;
	key(arr,n,k);
}

int main() {

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int k;
cin>>k;
cout<<key(arr,n,k);



 return 0;
}

