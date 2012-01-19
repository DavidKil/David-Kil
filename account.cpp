#include <iostream>
#include <string>
using namespace std;
 
class Loan
{
private:
int year;
double interest;
double balance;
double deposit;	
 
public:
	void newloan();
	void deposit();
	void checkloan();
	
};


void newloan();
{
balance = 0;
year = 0;
}

void deposit();
{
cout<<"\nEnter how much you wish to deposit: "
 












/*



void main()
{
	Bank bank;
	
 {
	int choice;
	do{
		
		cout << "\nWHAT WOULD YOU LIKE TO DO ?\n";
		cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";
		cout << "\t1. View Your Balance.\n";
		cout << "\t2. Deposit.\n";
		cout << "\t3. Withdraw.\n";
		cout << "\t4. Transfer.\n";
		cout << "\t5. Change Accounts.\n";
		cout << "\t6. Exit.\n\n";
		cout << "Please enter your choice: \n";
		cin >> choice;
		cout << "\n\n" << endl;
		while(choice > 6 && choice < 0)
		{
			cout << "The Number Must Be Between 1 And 5..." << endl;
			cin >> choice;
		}
	
		if (choice ==1)
		{
			bank.ShowChanges();
		}
		else if (choice ==2)
		{
			bank.EnterChanges();
		}
		else if (choice ==3)
		{
			bank.EnterChanges();
		}
		else if (choice ==4)
		{
			bank.ShowBalance();
		}
		else if (choice == 5)
		{
			
		}
	}while(choice != 6);
		cout << "You have chosen to exit the menu.\n";
		cout << "Thank you for visiting Programming Bank.\n";
	
}

 
*/