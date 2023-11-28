#include<iostream>
using namespace std;
main(){
	
	float maths,phy,chem,total;
	cout<<"enter the marks of maths : ";
	cin>>maths;
	
	cout<<"enter the marks of phy : ";
	cin>>phy;
	
	cout<<"enter the marks of chem : ";
	cin>>chem;
	
	total = maths+phy+chem;
	cout<<"\n total of three sub is : "<<total;
	
	
	if(maths>=65 && phy>=55 && chem>=50 && total>=190 && maths+phy>=140 ){
		
		cout<<"you are eligible for the course ";
	}
	else{
		cout<<"\n not eligible for the course";
	}
	
	
}