#include<iostream>
using namespace std;
class Grandfather{
	
	public:
		void land(){
			
			cout<<"\n 100 Acres of land";
		}
	
};
class Father: public Grandfather{
	
	public:
		void house(){
			
			cout<<"\n 4 BHK house";
		}
};
class Son: public Father{
	
	public:
		void car(){
			
			cout<<"\n Audi Car";
		}
		
	
};
main(){
	
	Son s;
	s.land();
	s.house();
	s.car();
	
	
}