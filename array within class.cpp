#include<iostream>
using namespace std;
class student{
	
	
	public:
		int id;
		string name;
		int marks[5];
		int i;
		
		void input(){
			
			cout<<"enter your id :";
			cin>>id;
			cout<<"enter your name :";
			cin>>name;
			for(i=0;i<5;i++){
				
				cout<<"Enter your marks : ";
				cin>>marks[i];
				
			}
			
		}
		void display(){
			
			cout<<"Your ID is "<<id;
			cout<<"Your name is : "<<name;
			for(i=0;i<5;i++){
				
				cout<<"\n Marks = "<<marks[i];
				
				
			}
			
			
			
		}
		
		
};
main(){
	
	int i;
	student s1[3]; // array of abjects
	for(i=0;i<3;i++){
		
		s1[i].input();	
	}
	for(i=0;i<3;i++){
		
		s1[i].display();	
		
	}
		
	
}