#include<iostream>
using namespace std;
class student{
	
	public:
		int id;
		string name;
		string sub;
		
		void setID(int id){
			
			this->id=id;
			
		}
		int getID()
		{
			return this->id;

		}		
	
		void setName(string name){
			
			this->name=name;
		}
		string getName(){
			
			return this->name;
		}
		
		void setSub(string sub){
			
			this->sub=sub;
			
		}
		string getSub(){
			
			return this->sub;
			
		}
		
		
		
		
};

main(){
	
	student s1;
	s1.setID(1);
	cout<<s1.getID();
	
	s1.setName("\n manav");
	cout<<s1.getName();
	
	s1.getSub("\n maths");
	cout<<s1.getSub();
	
}