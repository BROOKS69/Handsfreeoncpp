////EMPLOYEE SALARY MANAGEMENT SYSTEM//////

#include <iostream>
#include <string>
using namespace std;

class Employee
{
	string id, name, mail, adrs, pstn;
	int ndayswork;
	float rateperday;
	float bsal, gsal, netsal;
	float fuelallow, rentallow;
	float tax, socsec;
	
	public:
		void Employee_details();
		void Manager();
		void Director();
		void Staff();
		void Security();
};

void Employee::Employee_details()
{
	cout<<"\n\t\t\t *******Employee Details********";
	cout<<"\n\t\t\t *******************************"<<endl;
	cout<<"\n\t\t\t Enter your ID: ";
	cin>>id;
	cout<<"\n\t\t\t Enter your  fullname: ";
	cin.ignore();
	getline(cin, name);
	cout<<"\n\t\t\t Enter your work of position: ";
	getline(cin, mail);
	cout<<"\n\t\t\t Enter your e-mail address: ";
	getline(cin, pstn); 
	cout<<"\n\t\t\t Enter your residence address: ";
	getline(cin, adrs); 
	
	system("cls");
	cout<<"\n\t\t\t ***************EMPLOYEE DETAILS***************"<<endl;
	cout<<"\n\t\t\t =============================================="<<endl;
	cout<<"\n\t\t\t ID : "<<id;
	cout<<"\n\t\t\t Name : "<<name;
	cout<<"\n\t\t\t Position : "<<pstn;
	cout<<"\n\t\t\t E-mail : "<<mail;
	cout<<"\n\t\t\t Address : "<<adrs;
}

void Employee::Manager()
{
	cout<<"\n\t\t\t *******Manager Net Income Detial********";
	cout<<"\n\t\t\t ****************************************"<<endl;
	cout<<"\n\t\t\t Enter your ID: ";
	cin>>id;
	cout<<"\n\t\t\t Enter number of days work: ";
	cin>>ndayswork;
	cout<<"\n\t\t\t Enter rate per day: ";
	cin>>rateperday;
	cout<<"\n\t\t\t Enter tax rate: ";
	cin>>tax;
	cout<<"\n\t\t\t Enter social security rate: ";
	cin>>socsec;
	
	bsal=ndayswork*rateperday;
	fuelallow=bsal*(5);
	rentallow=bsal*(2);
	gsal=bsal+fuelallow+rentallow;
	tax=bsal*(5);
	socsec=bsal*(2);
	netsal=gsal-tax-socsec;
	
		system("cls");
	cout<<"\n\t\t\t ***************MANAGER NET INCOME DETAIL***************"<<endl;
	cout<<"\n\t\t\t ========================================================"<<endl;
	cout<<"\n\t\t\t ID : "<<id;
	cout<<"\n\t\t\t Numbers Of Days Work : "<<ndayswork;
	cout<<"\n\t\t\t Rate per Day : "<<rateperday;
	cout<<"\n\t\t\t Tax rate : "<<tax;
	cout<<"\n\t\t\t Social Security : "<<socsec;
	cout<<"\n\t\t\t Net Salary : "<<netsal;
		
}

void Employee::Director()
{
	cout<<"\n\t\t\t *******Director Net Income Detial********";
	cout<<"\n\t\t\t ****************************************"<<endl;
	cout<<"\n\t\t\t Enter your ID: ";
	cin>>id;
	cout<<"\n\t\t\t Enter number of days work: ";
	cin>>ndayswork;
	cout<<"\n\t\t\t Enter rate per day: ";
	cin>>rateperday;
	cout<<"\n\t\t\t Enter tax rate: ";
	cin>>tax;
	cout<<"\n\t\t\t Enter social security rate: ";
	cin>>socsec;
	
	bsal=ndayswork*rateperday;
	fuelallow=bsal*(5);
	rentallow=bsal*(2);
	gsal=bsal+fuelallow+rentallow;
	tax=bsal*(5);
	socsec=bsal*(2);
	netsal=gsal-tax-socsec;
	
		system("cls");
	cout<<"\n\t\t\t ***************DIRECTOR NET INCOME DETAIL***************"<<endl;
	cout<<"\n\t\t\t ========================================================"<<endl;
	cout<<"\n\t\t\t ID : "<<id;
	cout<<"\n\t\t\t Numbers Of Days Work : "<<ndayswork;
	cout<<"\n\t\t\t Rate per Day : "<<rateperday;
	cout<<"\n\t\t\t Tax rate : "<<tax;
	cout<<"\n\t\t\t Social Security : "<<socsec;
	cout<<"\n\t\t\t Net Salary : "<<netsal;
}

void Employee::Staff()
{
	cout<<"\n\t\t\t *******Staff Net Income Detial********";
	cout<<"\n\t\t\t ****************************************"<<endl;
	cout<<"\n\t\t\t Enter your ID: ";
	cin>>id;
	cout<<"\n\t\t\t Enter number of days work: ";
	cin>>ndayswork;
	cout<<"\n\t\t\t Enter rate per day: ";
	cin>>rateperday;
	cout<<"\n\t\t\t Enter tax rate: ";
	cin>>tax;
	cout<<"\n\t\t\t Enter social security rate: ";
	cin>>socsec;
	
	bsal=ndayswork*rateperday;
	fuelallow=bsal*(5);
	rentallow=bsal*(2);
	gsal=bsal+fuelallow+rentallow;
	tax=bsal*(5);
	socsec=bsal*(2);
	netsal=gsal-tax-socsec;
	
		system("cls");
	cout<<"\n\t\t\t ***************STAFF NET INCOME DETAIL***************"<<endl;
	cout<<"\n\t\t\t ========================================================"<<endl;
	cout<<"\n\t\t\t ID : "<<id;
	cout<<"\n\t\t\t Numbers Of Days Work : "<<ndayswork;
	cout<<"\n\t\t\t Rate per Day : "<<rateperday;
	cout<<"\n\t\t\t Tax rate : "<<tax;
	cout<<"\n\t\t\t Social Security : "<<socsec;
	cout<<"\n\t\t\t Net Salary : "<<netsal;
}

void Employee::Security()
{
	cout<<"\n\t\t\t *******Security Net Income Detial********";
	cout<<"\n\t\t\t ****************************************"<<endl;
	cout<<"\n\t\t\t Enter your ID: ";
	cin>>id;
	cout<<"\n\t\t\t Enter number of days work: ";
	cin>>ndayswork;
	cout<<"\n\t\t\t Enter rate per day: ";
	cin>>rateperday;
	cout<<"\n\t\t\t Enter tax rate: ";
	cin>>tax;
	cout<<"\n\t\t\t Enter social security rate: ";
	cin>>socsec;
	
	bsal=ndayswork*rateperday;
	fuelallow=bsal*(5);
	rentallow=bsal*(2);
	gsal=bsal+fuelallow+rentallow;
	tax=bsal*(5);
	socsec=bsal*(2);
	netsal=gsal-tax-socsec;
	
		system("cls");
	cout<<"\n\t\t\t ***************SECURITY NET INCOME DETAIL***************"<<endl;
	cout<<"\n\t\t\t ========================================================"<<endl;
	cout<<"\n\t\t\t ID : "<<id;
	cout<<"\n\t\t\t Numbers Of Days Work : "<<ndayswork;
	cout<<"\n\t\t\t Rate per Day : "<<rateperday;
	cout<<"\n\t\t\t Tax rate : "<<tax;
	cout<<"\n\t\t\t Social Security : "<<socsec;
	cout<<"\n\t\t\t Net Salary : "<<netsal;
}

void menu(); //menu function

int main()
{
	int option;
	string exit;
	Employee user;
	
	//system("cls");
		menu(); //Menu funtion
    cout<<" "<<endl;	
	cout<<"\t\t\t You can enter 'exit' anytime to quit the program option."<<endl;
	cout<<"\n\t\t\t";
	
	cout<<"\n\t\t\t Choose an option : ";
    cin>>option;
   	
		switch (option) //Using swutch case
		{
			case 0:
				user.Employee_details();
				break;
			case 1:
				user.Manager();
				break;
			case 2:
				user.Director();
			    break;
			case 3:
				user.Staff();
			    break;
			case 4:
				user.Security();
			break;	
		}
		
	if(option == 'exit')
	{
	 cout<<"\n\t\t\t Wrong entry! ";
	}
	else
	{
	 cout<<"\n\t\t\t Thanks for using the software ";
	 
	}
	
	
//	cin.get();
	return 0;
}

void menu()
{
	cout<<"\n\t\t\t =====================================================";
	cout<<"\n\t\t\t **********EMPLOYEE SALARY MANAGEMENT SYSTEM**********";
	cout<<"\n\t\t\t =====================================================";
	cout<<"\n\t\t\t | 0. Employee Details ";
	cout<<"\n\t\t\t | 1. Manager ";
	cout<<"\n\t\t\t | 2. Director ";
	cout<<"\n\t\t\t | 3. Staff ";
	cout<<"\n\t\t\t | 4. Security "<<endl;
}
