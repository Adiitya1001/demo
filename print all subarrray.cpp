#include<iostream>
using namespace std;

void solve(int* arr, int n,int s ,int e){
	if(e>n){
		return;
	}
	for(int i=s;i<e;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	solve(arr,n,s,e+1);
}




int main() {

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
for(int i=0;i<n;i++){
	solve(arr,n,i,i);
}



 return 0;
}

