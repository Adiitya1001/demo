#include<iostream>
#include<algorithm>
using namespace std;

//void solve(string& s,string& part,string temp){
//	int p=s.find(part);
//	if(p== string::npos){
//		return;
//	}
//	else{
//		s.erase(p,part.size());
//		solve(s,part,temp);
//	}
//
//}
void scaler(int n,int i){
	if(i>=n){
		return;
	}
	cout<<i<<endl;
	scaler(n,++i);
}
void print(int* arr,int s,int e,int n){
if(e>n){
	return;
}
for(int i=s;i<e;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
print(arr,s,e+1,n);}
void helper(int* arr, int n){
	for(int i=0;i<n;i++){
		print(arr,i,i,n);
	}
}

int main() {
int n;
cin>>n;
//int arr[n];
//for(int i=0;i<n;i++){
//	cin>>arr[i];
//}
//helper(arr,n);
//string s1;
//string s2;
//cin>>s1>>s2;
//string temp="";
//solve(s1,s2,temp);
////reverse(temp.begin(),temp.end());
//cout<<s1;
scaler(5,0);
 return 0;
}

