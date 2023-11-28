#include<iostream>
using namespace std;
class Father{
	
	
	public:
		void house()
 	{
 		
 		cout<<"3 bhk house";
	}	
	
	
};
class Son : public Father{
	
	public:
		void car(){
			
			cout<<"\n Mercedez car";
		}
	
};
main(){
	
	Son sobj;
	sobj.house();
	sobj.car();
	
	
}