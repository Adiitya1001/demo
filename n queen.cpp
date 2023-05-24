#include<iostream>
using namespace std;

void print(int arr[4][4],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}

bool isSafe(int arr[4][4],int i,int j,int n){
 int row=i;
 int col=j;
 while(col>=0){
 	if(arr[i][col]==1){
 		return false;
	 }
	 col--;
 }
 row=i;
 col=j;
 while(i>=0 &&j>=0){
 	if(arr[i][j]==1){
 		return false;
	 }
	 i--;j--;
 }
 i=row;
 j=col;
 while(i<n&&j>=0){
 	if(arr[i][j]==1){
 		return false;
	 }
	 i++;j--;
 }	
 
}


void solve(int arr [4][4],int& n,int col){
	if(col>=n){
		print(arr,n);
		return;
	}
	
	for(int i=0;i<n;i++){
		if(isSafe(arr,i,col,n)){
			arr[i][col]=1;
//			cout<<arr[i][col];
			solve(arr,n,col+1);
			arr[i][col]=0;
		}
	}
	
}


int main() {

int arr[4][4]={0};
int n=4;
int col=n;
solve(arr,n,0);
//print(arr,n);



 return 0;
}

