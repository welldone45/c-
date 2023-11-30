#include<iostream>
using namespace std;
class Test
{
	
	public:
		int x;
	protected :
		int y;
	private :
		int z;
		
	friend void fun();
	

};

void fun()
{
	
	Test t;
	t.x=10;
	t.y=20;
	t.z=30;
	
	cout<<"\nThe value of x is : "<<t.x;
	cout<<"\nThe value of y is :"<<t.y;
	cout<<"\nThe value of y is :"<<t.z;
	
	
}
main()
{
	
	fun();
	
}