#include<iostream>
using namespace std;
void decending(int n) {
	if(n==0) {
		return ;
	}
	cout<<n;
	decending(n-1);
}
void ascending(int n) {
	if(n==0) {
		return ;
	}
	ascending(n-1);
	cout<<n;

}

int main() {

	int n;
	cin>>n;
	ascending(n);
	cout<<endl;
	decending(n);



	return 0;
}

