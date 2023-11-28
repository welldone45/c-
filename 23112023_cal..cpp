#include<iostream>
using namespace std;
class cal{
	
	public:
		cal(int num1, int num2){
		
			cout<<"enter num1";
			cin>>num1;
			cout<<"enter num2";
			cin>>num2;
			cout<<"total is : "<<num1+num2;
			}
		
			
};

main(){
	int num1,num2;
	
	cal c1(num1,num2);
}