include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
	int mid=s+(e-s)/2;
	int len1=mid-s+1;
	int len2=e-mid;
	int left[len1];
	int right[len2];
	int k=s;
	for(int i=0;i<len1;i++){
		left[i]=arr[k++];
	}
	k=mid+1;
	for(int i=0;i<len1;i++){
		right[i]=arr[k++];
	}
	int lefti=0;
	int righti=0;
	int maini=s;
	while(lefti<len1 && righti<len2){
		if(left[lefti]>right[righti]){
			arr[maini++]=right[righti++];
		}
		else{
			arr[maini++]=left[lefti++];
		}
	}
	while(lefti<len1){
		arr[maini++]=left[lefti++];
	}
	while(righti<len2){
		arr[maini++]=right[righti++];
	}
}

void mergesort(int *arr,int s,int e){
	if(s>=e){
		return;
	}
	int mid=s+(e-s)/2;
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	merge(arr,s,e);
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
mergesort(arr,s,e);
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

 return 0;
}

