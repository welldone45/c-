#include<iostream>
using namespace std;
class demo
{
	
	public:
		demo() // constructor
	{
		cout<<"This is Constructor";
	}
	~demo() // destructor
	{
		
		cout<<"This is destructor";
	}
};
main()
{
	
	demo d1;
}