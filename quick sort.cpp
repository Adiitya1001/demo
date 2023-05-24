#include<iostream>
using namespace std;

int part(int* arr,int s,int e){
	int pelement=arr[s];
	int pindex=s;
	int count=0;
	for(int i=s+1;i<=e;i++){
		if(arr[i]<=pelement) count++;
	}
	int cindex=s+count;
	swap(arr[pindex],arr[cindex]);
	pindex=cindex;
	pelement=arr[pindex];
	int i=s;
	int j=e;
	while(i<pindex && j>pindex){
		while(arr[i]<=pelement){
			i++;  
		}
		while(arr[j]>pelement){
			j--;
		}
		if(i<pindex &&j>pindex){
			swap(arr[i++],arr[j++]);
		}
	}
	return pindex;
}

void sort(int* arr, int s ,int e){
	if(s>=e){
		return;
	}
	int index=part(arr,s,e);
	
	sort(arr,s,index-1);
	sort(arr,index+1,e);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
