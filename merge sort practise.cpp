#include<iostream>
using namespace std;

void merge(int* arr,int s,int e) {
	int mid=s+(e-s)/2;
	int l1=mid-s+1;
	int l2=e-mid;
	int* la=new int[l1];
	int* ra=new int[l2];
	int k=s;
	for(int i=0; i<l1; i++) {
		la[i]==arr[k];
		k++;
	}
	for(int i=0; i<l2; i++) {
		ra[i]==arr[k];
		k++;
	}
	int li=0;
	int ri=0;
	int mi=s;
	while(li<l1 && ri<l2){
		
		if(la[li]>ra[ri]){
			arr[mi++]=ra[ri++];
		}
		else{
			arr[mi++]=la[li++];
		}
		
	}
	while(li<l1){
		arr[mi++]=la[li++];
	}
	while(ri<l2){
		arr[mi++]=ra[ri++];
	}
}


void sort(int* arr,int s,int e) {
	if(s>=e) return;
	int mid=s+(e-s)/2;
	sort(arr,s,mid);
	sort(arr,mid+1,e);
	merge(arr,s,e);
}


int main() {

	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	sort(arr,0,n-1);
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}


	return 0;
}

