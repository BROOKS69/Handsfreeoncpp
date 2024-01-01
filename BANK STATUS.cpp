//BANK SYSTEM 

#include <iostream>
using namespace std;

class bank
{
string name, sname, adrs;
string bname, bk_adrs;
float amnt;
float acc;


public:
float deposit();
float withdrawal();
float check_balance();
float user_details();	
};

float bank::deposit()
{
	cout<<"Input name "<<endl;
	cin>>bank::name;
	cout<<"Input surname "<<endl;
	cin>>sname;
	cout<<"Enter your address "<<endl;
	cin>>bank::adrs;
	cout<<"Input Bank name "<<endl;
	cin>>bank::bname;
	cout<<"Enter Bank address "<<endl;
	cin>>bank::bk_adrs;
	
	cout<<"\nInput Account number "; // Acc numb should be less than 16 == Acc numb. <16 (15 digits)
	cin>>bank::acc;
	if(acc<0 or acc<16)
	{
		cout<<"\nCorrect";
	}
	else{cout<<"\nWrong entry, re-input";
	}
	cout<<"\nEnter your amount "; //Amount should be in figures eg. 10,250.00
	cin>>bank::amnt;
	
	cout<<"\n "<<endl;
	cout<<"\t**********Statement On Deposit**********"<<endl;
	cout<<"\t****************************************";
	cout<<"\nName Of Account Holder: "<<name;
	cout<<"\nAdress: "<<adrs; 
	cout<<"\nAmount Deposited: "<<amnt;
}

int main()
{
 bank Deposit, Withdrawal, Check_blance, User_detials;

Deposit.deposit();


return 0;
}
