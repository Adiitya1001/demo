#include<iostream>
using namespace std;
int i=0;
int counter=0;
int occurances(int arr[],int n,int k){
	if(arr[i]==k)
	counter++;
	if(i==n)
	return counter;
	i++;
	occurances(arr,n,k);
	
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
cout<<occurances(arr,n,k);

 return 0;
}

