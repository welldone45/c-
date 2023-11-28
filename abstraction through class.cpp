#include<iostream>
#include<math.h>
using namespace std;
class abstractiondemo{
	
	
	private:
		int x=10,y=20; // private members
		
		public:
			void display(){ // method
				
				cout<<" X = "<<x;
				cout<<" Y = "<<y;
			}
		
	
};
main(){
	
	abstractiondemo ad;
	ad.display();
	
	
}