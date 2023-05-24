#include<iostream>
using namespace std;


int main() {
int a,x,y,z;
cin>>x>>y>>z;
a=(x>y)?((x>z)?x:z):((y>z)?y:z);
cout<<a;


 return 0;
}

