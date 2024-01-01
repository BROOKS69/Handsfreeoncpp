//////////////BANK APP/////////////
#include<iostream>
#include<conio.h>
#include <string>
using namespace std;

// class Bank
class Bank
{
  string  ID_number, acc_name, residence;
  string  pswd, birth,E_mail, marital_stat; 
  int age;
  float amount,amnt;
  char gender;
  long long int tel, acc_number;

// public member functions
  public:
  void Deposit();
  void Withdrawal();
  void Check_balance();
  void User_details();
};

// implementing member functions
void Bank::User_details()
{
  cout<<"\t\t\t\t***Bio-Data***"<<endl;
  cout<<"\t\t\t\t--------------"<<endl;
  cout<<"\n\t\t\t Account Name : ";
  cin.ignore();
  getline(cin, acc_name);
  
  long long int accnumb = 123456789098765; //account numbers should be in only numbers
  long long int acc_number;          //account number shooul be at least less than 16 digits or 15 digits only
  do
  {
  	cout<<"\n\t\t\t Account number : ";
    cin>>acc_number;
    if(accnumb == acc_number)
    {
    	cout<<"\n\t\t\t verified....";
	}
	else{
		cout<<"\n\t\t\t try again!";
	}
  }
  while(acc_number != accnumb);
  
  cout<<"\n\t\t\t ID number : ";
  cin.ignore();
  getline(cin, ID_number);
  cout<<"\n\t\t\t Telephone number : ";
  cin>>tel;
  cout<<"\n\t\t\t Residence : ";
  cin.ignore();
  getline(cin, residence);
  cout<<"\n\t\t\t Date of Birth : ";
  getline(cin, birth);
  cout<<"\n\t\t\t Gender : ";
  gender = getche();
  cout<<"\n\t\t\t Marital Status : ";
  getline(cin, marital_stat);
  cout<<"\n\t\t\t E-Mail Address : ";
  getline(cin, E_mail); 

  // print details
   system("cls");
  cout<<"\t\t\t\t********Bio-Data*********"<<endl;
  cout<<"\t\t\t\t-------------------------"<<endl;
  cout<<"\n\t\t\t Account Name : "<<acc_name;
  cout<<"\n\t\t\t Account Number : "<<acc_number;
  cout<<"\n\t\t\t ID Number  : "<<ID_number;
  cout<<"\n\t\t\t Age : "<<age;
  cout<<"\n\t\t\t Telephone Number : "<<tel;
  cout<<"\n\t\t\t E-mail Address : "<<E_mail;
  cout<<"\n\t\t\t Date of Birth : "<<birth;
  cout<<"\n\t\t\t Gender : "<<gender;
  cout<<"\n\t\t\t Marital Status : "<<marital_stat;
  cout<<"\n\t\t\t Residence : "<<residence;
cin.get();
}

void Bank::Check_balance()
{
  cout<<"\n\t\t\t Acount Name : ";
  cin.ignore();
  getline(cin, acc_name);
  
  long long int accnumb = 123456789098765; //account numbers should be in only numbers
  long long int acc_number;          //account number shooul be at least less than 16 digits or 15 digits only
  do{
  	cout<<"\n\t\t\t Account number : ";
    cin>>acc_number;
    if(accnumb == acc_number)
    {
    	cout<<"\n\t\t\t verified...... ";
	}
	else{
		cout<<"\n\t\t\t try again! "<<endl;
	}
  }
  while(acc_number != accnumb);
  /*cout<<"\n\t\t\t Account number : ";
  cin.ignore();
  getline(cin, acc_number);*/
  
  cout<<"n\t\t\t Acount password : ";
  cin.ignore();
  getline(cin, pswd);
  
   system("cls");
  cout<<" "<<endl;
  cout<<"\t\t\t\t***Account Balance***"<<endl;
  cout<<"\t\t\t\t----------------------"<<endl;
  cout<<"\n\t\t\t Account Name : "<<acc_name;
  cout<<"\n\t\t\t Account Number : "<<acc_number;
  cout<<"\n\t\t\t Amount in account :"<<amount-amnt;
  
}

void Bank::Deposit()
{ 
    cout<<"\n\t\t\t Acount Name : ";
    cin.ignore();
    getline(cin, acc_name);
    
  long long int accnumb = 123456789098765; //account numbers should be in only numbers
  long long int acc_number;          //account number shooul be at least less than 16 digits or 15 digits only
  do{
  	cout<<"\n\t\t\t Account number : ";
    cin>>acc_number;
    if(accnumb == acc_number)
    {
    	cout<<"\n\t\t\t verified......";
	}
	else{
		cout<<"\n\t\t\t try again!";
	}
  }
  while(acc_number != accnumb);
/*	cout<<"\n\t\t\t Account number : ";
    cin.ignore();
    getline(cin, acc_number);*/
    
	cout<<"\n\t\t\t Amount to deposit : ";
	cin>>amount;
	cout<<"n\t\t\t Acount password : ";
    cin.ignore();
    getline(cin, pswd);
    
     system("cls");
  cout<<" "<<endl;
  cout<<"\t\t\t\t***Account Deposited***"<<endl;
  cout<<"\t\t\t-------------------------"<<endl;
  cout<<"\n\t\t\t Account Name : "<<acc_name;
  cout<<"\n\t\t\t Current amount deposited :"<<amount;
}

void Bank::Withdrawal()
{
  cout<<"\n\t\t\t Acount Name : ";
  cin.ignore();
  getline(cin, acc_name);
  
  long long int accnumb = 123456789098765; //account numbers should be in only numbers
  long long int acc_number;          //account number shooul be at least less than 16 digits or 15 digits only
  do{
  	cout<<"\n\t\t\t Account number : ";
    cin>>acc_number;
    if(accnumb == acc_number)
    {
    	cout<<"\n\t\t\t verified......";
	}
	else{
		cout<<"\n\t\t\t try again!";
	}
  }
  while(acc_number != accnumb);
  /*cout<<"\n\t\t\t Account number : ";
  cin.ignore();
  getline(cin, acc_number);*/
  
  cout<<"\n\t\t\t Amount to withdrawal : ";
  cin>>amnt;
  cout<<"n\t\t\t Acount password : ";
  cin.ignore();
  getline(cin, pswd);
  
   system("cls");
  cout<<" "<<endl;
  cout<<"\t\t\t\t***Account Withdrawal***"<<endl;
  cout<<"\t\t\t\t------------------------"<<endl;
  cout<<"\n\t\t\t Account Name : "<<acc_name;
  cout<<"\n\t\t\t Account Number : "<<acc_number;
  cout<<"\n\t\t\t Amount withdrawal :"<<amount;	
}

void menu();    //Menu function 


int main()
{
  int option;
  char x;   // last option
  Bank user;
  
  do
  {
    system("cls");
    menu();
    cout<<"\n\t\t\tChoose an option : ";
    cin>>option;

    // using switch cases
    a:switch (option)
    {
    case 1:
      user.User_details();
      break;
    case 2:
       user.Withdrawal();
      break;
    case 3:
      user.Deposit();
      break;
    case 4:
      user.Check_balance();
      break;
    case 5:
     exit(0);
      break;
          
    default:
      while(option <1 || option >5)
      {
        cout<<"\t\t\tIncorrect input. Try Again! ";
        cin>>option;
        goto a;
      }
    }
    cout<<"\nSelect An Option Again? y/n => ";
    x = getch();
    b:if(x == 'n' || x == 'N')
    {
      cout<<"\nThanks For using software...\nPress Enter to Exit";
      break;
    }
    else
    {
      while(x !='n' || x != 'N')
      {
        if(x == 'y' || x == 'Y')
          break;
        else
        {
          cout<<"\nWrong choice. Please retry : ";
          x = getch();
          goto b;
        }
      }
    }
  } while (x =='y' || x =='Y');
 
  cin.get();
}

void menu()
{
  cout<<"\n\t\t\t=============================";
  cout<<"\n\t\t\t  ***Welcome to KTU BANK***";
  cout<<"\n\t\t\t=============================";
  cout<<"\n\t\t | 1. User Details";
  cout<<"\n\t\t | 2. Withdrawal";
  cout<<"\n\t\t | 3. Deposit";
  cout<<"\n\t\t | 4. Check Balance";
  cout<<"\n\t\t | 5. Exit";
}
	
