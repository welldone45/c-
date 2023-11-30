#include<iostream>
using namespace std;
class A
{
	
	protected:
		int x;
	
};

class B : public A
{
	
	public:
		void getDetails()
		{
			
			cout<<"Enter the value of x:";
			cin>>x;
		}
		void display()
		{
			
			cout<<"The value of x is :"<<x;
			
		}
};

main()
{
	B obj;
	obj.getDetails();
	obj.display();
}