#include<iostream>
using namespace std;
class student{
	
	public:
		int id;
		string name;
		float marks;
		
		void inputdata(){
			
			cout<<"enter id : ";
			cin>>id;
			cout<<"enter name :";
			cin>>name;
			cout<<"enter marks of maths : ";
			cin>>marks;
			cout<<"enter marks of Science: ";
			cin>>marks;
		}
	
		void displaydata(){
			
			cout<<"student id is: "<<id<<endl;
			cout<<"studnet name is : "<<name<<endl;
			cout<<"sutdnet marks is : "<<marks<<endl;
			cout<<"maths marks is : "<<marks<<endl;
			cout<<"Sciencemarks is : "<<marks<<endl;
		}
	
	
};
main(){
	
	student sobj;
	sobj.inputdata();
	sobj.displaydata();
	
}