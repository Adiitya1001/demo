#include<iostream>
using namespace std;

int bsearch(int* arr,int s,int e,int key){
	if(s>e){
		return -1;
	}
	int mid=s+(e-s)/2;
	if(arr[mid]==key){
		return mid;
	}
	if(arr[mid]<key)
	 bsearch(arr,mid+1,e,key);
	else{
	bsearch(arr,s,mid-1,key);
	}
}


int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int s=0;
int e=n-1;
int key;
cin>>key;
cout<<"Key found on Element "<<bsearch(arr,s,e,key);




 return 0;
}

