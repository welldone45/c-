#include<iostream>
using namespace std;
class fact{


	public:
		int num,i,sum=1;
		
		void inputdata(){
		
			cout<<"enter number : ";
			cin>>num;	
					
			for(i=1;i<=num;i++){
				
				sum=sum * i;
			}
		
		}

		void displaydata(){
		
			cout<<"fact value is : "<<sum;
		}
};

int main(){
	
	fact fobj;
	fobj.inputdata();
	fobj.displaydata();
	
}
