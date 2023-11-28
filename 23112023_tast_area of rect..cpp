#include<iostream>
using namespace std;
class rect{
	
	public:
		
		float area,length,width;
		
		void inputdata(){
		
		cout<<"enter the length of rectangel : ";
		cin>>length;
		cout<<"enter the width of rectangel : ";
		cin>>width;
			
		}
		
		void displaydata(){
			
		area=length*width;
		cout<<"Area of Rectangle is : "<<area;	

		}

};

main(){
	
	float area, length, width;
	rect robj;
	robj.inputdata();
	robj.displaydata(); 
	
}