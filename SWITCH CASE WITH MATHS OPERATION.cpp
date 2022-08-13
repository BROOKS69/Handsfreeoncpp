//Simple Calculator

#include <iostream>
using namespace std;

int main()
{
   int choice;
   float num1,num2,result;
   cout<<"\nSimple Calculator Program";
   cout<<"\nSelect your option";
   cout<<"\n1. Addition";
   cout<<"\n2. Subtraction";
   cout<<"\n3. Multiplication";
   cout<<"\n4. Division\n";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
		cout<<"Enter first value";
		cin>>num1;
		cout<<"Enter second value";
		cin>>num2;
		result=num1+num2;
		cout<<"The result is "<<result;
		break;
		
		case 2:
		cout<<"Enter first value";
		cin>>num1;
		cout<<"Enter second value";
		cin>>num2;
		result=num1-num2;
		cout<<"The result is "<<result;
		break;		
		
		case 3:
		cout<<"Enter first value";
		cin>>num1;
		cout<<"Enter second value";
		cin>>num2;
		result=num1*num2;
		cout<<"The result is "<<result;
		break;
		
		case 4:
		cout<<"Enter first value";
		cin>>num1;
		cout<<"Enter second value";
		cin>>num2;
		result=num1/num2;
		cout<<"The result is "<<result;
		break;
		default:
			cout<<"Wrong input, retype";
	}
	
	
	cin.get();
	return 0;	
}	
