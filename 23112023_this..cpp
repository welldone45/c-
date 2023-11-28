#include<iostream>
using namespace std;
class student{
	
	public :
		
		int a,b;
		void inputdata(int a, int b){
			
			this->a = a;
			this->b = b;
		}
		void displaydata(){
			
			cout<<"\n a="<<a;
			cout<<"\n b="<<b;
		}
	
};
main(){
	
	student obj1;
	obj1.inputdata(10,15);
	obj1.displaydata();
}