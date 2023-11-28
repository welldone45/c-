#include<iostream>
using namespace std;
main(){
	
	float p,r,n,si;
	cout<<"enter the principal amount: ";
	cin>>p;
	cout<<"enter the rate: ";
	cin>>r;
	cout<<"enter the time : ";
	cin>>n;
	
	si=(p*r*n)/100;
	cout<<"The simple interest is :"<<si;
	
	
}