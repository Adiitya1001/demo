#include<iostream>
#include<vector>
using namespace std;

bool check(int arr[2][2],int i,int j, int row,int col,bool flag[2][2]){
	if( ((i>=0 && i<row)&&(j>=0&&j<col))&&(arr[i][j]==1)&&(flag[i][j]==false)){
		return true;
	}
	return false;
}

void solve(int arr[2][2],int i,int j,int row,int col,vector<string>& ans,string output,bool flag[2][2]){
	if(i==row-1 && j==col-1){
		ans.push_back(output);
		return;
	}
	//down
	if(check(arr,i+1,j,row,col,flag)){
		cout<<"fe";
		flag[i+1][j]=true;
		solve(arr,i+1,j,row,col,ans,output+'D',flag);
		flag[i+1][j]=false;
	}
	//left
	if(check(arr,i,j-1,row,col,flag)){
		flag[i][j-1]=true;
		solve(arr,i,j-1,row,col,ans,output+'L',flag);
		flag[i][j-1]=false;
	}
	//right
	if(check(arr,i,j+1,row,col,flag)){
		flag[i][j+1]=true;
		solve(arr,i,j+1,row,col,ans,output+'R',flag);
		flag[i][j+1]=false;
	}
	//up
	if(check(arr,i-1,j,row,col,flag)){
		flag[i-1][j]=true;
		solve(arr,i-1,j,row,col,ans,output+'U',flag);
		flag[i-1][j]=false;
	}
}


int main() {

int arr[2][2]={{1, 1},
         {1, 1}, 
        };
        
bool flag[2][2]={0};
flag[0][0]=true;

vector<string> ans;
string output;
solve(arr,0,0,2,2,ans,output,flag);
//cout<<ans.size();
for(int i=0;i<ans.size();i++){
	cout<<ans[i]<<" ";
}
 return 0;
}

