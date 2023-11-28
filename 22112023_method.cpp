#include<iostream>
using namespace std;
class student
{

	public:
	int id; // data member
	string name;
	string subject;
	
	void inputdata()
    {
	
		cout<<"enter the id:";
		cin>>id;
		cout<<"enter the name:";
		cin>>name;
		cout<<"enter the subject:";
		cin>>subject;
				
	}	
	
	void displaydata(){
		
		cout<<"\n student id:"<<id;
		cout<<"\n student name:"<<name;
		cout<<"\n student subject:"<<subject;
	}
	
	};

main(){

	student sobj; // object creation
	sobj.inputdata();
	sobj.displaydata();

}