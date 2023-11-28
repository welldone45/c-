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


class Faculty{
	
	
	public:
	int id; // data member
	string name;
	string department;
	
	void inputdata()
    {
	
		cout<<"enter the Faculty id:";
		cin>>id;
		cout<<"enter the Faculty name:";
		cin>>name;
		cout<<"enter the Faculty department:";
		cin>>department;
				
	}	
	
	void displaydata(){
		
		cout<<"\n Faculty id:"<<id;
		cout<<"\n Faculty name:"<<name;
		cout<<"\n Faculty department:"<<department;
	}	
	
		
};




main(){

	student sobj; // object creation
	sobj.inputdata();
	sobj.displaydata();

	Faculty fobj;
	fobj.inputdata();
	fobj.displaydata();
}