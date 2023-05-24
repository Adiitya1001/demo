#include<iostream>
using namespace std;
int i=0;
int mini=INT_MAX;
void min(int arr[],int n){
	if(i==n){
		cout<<mini;
		return ;
	}
//	cout<<arr[i];
	if(mini>arr[i]){
		
		mini=arr[i];
	}
	i++;
	min(arr,n);
}

int main() {

 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
 	cin>>arr[i];
 }
min(arr,n);


 return 0;
}

