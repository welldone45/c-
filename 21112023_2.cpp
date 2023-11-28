#include<iostream>
using namespace std;
main(){
	
	int vehicle1,vehicle2;
	cout<<"enter vehicle1 speed : ";
	cin>>vehicle1;
	
	cout<<"enter vehicle2 speed: ";
	cin>>vehicle2;
	
	if(vehicle1>vehicle2){
		
		cout<<"vehicle1 is faster ";
	}
	else if(vehicle1<vehicle2){

			
		cout<<"vehicle2 is faster";
	}
	else{
		
		cout<<"both are on same speed";
	}
	
}