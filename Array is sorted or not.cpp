#include<iostream>
using  namespace std;

bool issorted(int arr[],int n,int i){
    if(i==n-1)
        return true;
    
    if(arr[i]<=arr[i+1])
      issorted(arr,n,i+1);
      
    else{
         return false;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(issorted(arr,n,0)){
        cout<<"Yes array is Sorted ";
    }
    else{
        cout<<"No Array is not Sorted";
    }
}
