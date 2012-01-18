#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

struct customer{
	float savings;
	float checking;
	char username[9];
} ohlone[5];

//PROTOTYPE;
int Signin(void);
void Menu1(int );
void ViewBalance1(int);
void ohlone_balance(int );
void ohlone_deposit(int );
void ohlone_withdraw(int );
void ohlone_transfer(int );
void ohlone_checking_deposit(int );
void ohlone_checking_withdraw(int );
void ohlone_savings_deposit(int );
void ohlone_savings_withdraw(int );


int main()
{
	int i,users;
	
	for(i = 0; i < 5; i++)
	{
		ohlone[i].savings = 1500.00;
		ohlone[i].checking = 1000.00;
	}
	cout << "WELCOME TO PROGRAMMING BANK!\n\n";
	cout << "~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n\n";
	users = Signin();
	Menu1(users);
	return 0;
}

int Signin()
{
	char username[31], PW[20];
	int tries, user;

	cout << "Please enter your username: \n";
//	cin.width(32);
	cin >> username;
	if (strcmp(username, "ohlone1") == 0 || strcmp(username, "ohlone2") == 0 || strcmp(username, "ohlone3") == 0 || strcmp(username, "ohlone4") ==0 || strcmp(username, "ohlone5") == 0)
	{
		//User 1
		if (strcmp(username, "ohlone1") ==0)
		{
			tries = 0;
			cout << "Please enter your password: \n";
			cin >> PW;

			if (strcmp(PW, "ohlone1pw") == 0)
			{
				cout << "\n\n\tYou are logged in!\n\t";
				tries = 3;
			}

			while(strcmp(PW, "ohlone1pw") != 0 && tries != 3)
			{
				tries++;
				cout << "Your password was entered incorrectly.(It's CaSe SeNsAtIvE)\n";
				cout << "Please enter your password again.\n";
				cin >> PW;	
			}
			strcpy(ohlone[0].username, username);
			user = 0;
		}
		//User 2
		else if (strcmp(username, "ohlone2") ==0)
		{
			tries=0;
			cout << "Please enter your password: \n";
			cin >> PW;
			
			if (strcmp(PW, "ohlone2pw") == 0)
			{
				cout << "\n\n\tYou are logged in!\n\n";
				tries=3;
			}
			while(strcmp(PW, "ohlone2pw") != 0 && tries != 3)
			{
				cout << "Your password was entered incorrectly.(It's CaSe SeNsAtIvE)\n";
				cout << "Please enter your password again.\n";
				cin >> PW;
			}
			strcpy(ohlone[1].username, username);
			user = 1;
		}
		//User 3
		else if (strcmp(username, "ohlone3") == 0)
		{
			tries=0;
			cout << "Please enter your password: \n";
			cin >> PW;
			
			if (strcmp(PW, "ohlone3pw") == 0)
			{
				cout << "\n\n\tYou are logged in!\n\n";
				tries=3;
			}
			while(strcmp(PW, "ohlone3pw") != 0 && tries != 3)
			{
				cout << "Your password was entered incorrectly.(It's CaSe SeNsAtIvE)\n";
				cout << "Please enter your password again.\n";
				cin >> PW;
			}
			strcpy(ohlone[2].username, username);
			user = 2;
		}
		//User 4
		else if (strcmp(username, "ohlone4") == 0)
		{
			tries=0;
			cout << "Please enter your password: \n";
			cin >> PW;
			
			if (strcmp(PW, "ohlone4pw") == 0)
			{
				cout << "\n\n\tYou are logged in!\n\n";
				tries=3;
			}
			while(strcmp(PW, "ohlone4pw") != 0 && tries != 3)
			{
				cout << "Your password was entered incorrectly.(It's CaSe SeNsAtIvE)\n";
				cout << "Please enter your password again.\n";
				cin >> PW;
				
			}
			strcpy(ohlone[3].username, username);
			user = 3;
		}
		//User 5
		else if (strcmp(username, "ohlone5") == 0)
		{
			tries=0;
			cout << "Please enter your password: \n";
			cin >> PW;
			
			if (strcmp(PW, "ohlone5pw") == 0)
			{
				cout << "\n\n\tYou are logged in!\n\n";
				tries=3;
			}
			while(strcmp(PW, "ohlone5pw") != 0 && tries != 3)
			{
				cout << "Your password was entered incorrectly.(It's CaSe SeNsAtIvE)\n";
				cout << "Please enter your password again.\n";
				cin >> PW;
				
			}		
			strcpy(ohlone[4].username, username);
			user = 4;
		} 
	}
     
	else if (strcmp(username, "ohlone1") != 0 && strcmp(username, "ohlone2") != 0 && strcmp(username, "ohlone3") != 0 && strcmp(username, "ohlone4") !=0 && strcmp(username, "ohlone5") != 0)
	{
		cout << "your enter your username incorrectly.\n";
		cout << "Please try again.\n";
		exit(1);
	}
	return user;
}
	//done up to here 07/22/05 8:30 PM
	
void Menu1(int user)
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
			ohlone_balance(user);
		}
		else if (choice ==2)
		{
			ohlone_deposit(user);
		}
		else if (choice ==3)
		{
			ohlone_withdraw(user);
		}
		else if (choice ==4)
		{
			ohlone_transfer(user);
		}
		else if (choice == 5)
		{
			user = Signin();
		}
	}while(choice != 6);
		cout << "You have chosen to exit the menu.\n";
		cout << "Thank you for visiting Programming Bank.\n";
	
}

void ohlone_balance (int user)
{
	cout << "\nYour checking account has : " << ohlone[user].checking << endl;
	cout << "Your saving account has : " << ohlone[user].savings << "\n\n" << endl;
}

void ohlone_checking_deposit(int user)
{
	float amount;
	cout << "You Have " << ohlone[user].checking << " In Your Checking Account."<<endl;
	cout << "How Much Would You Like To Deposit Into Your Checking Account?"<<endl;
	cin >> amount;
	ohlone[user].checking += amount;
}

void ohlone_checking_withdraw(int user)
{
	
	float amount;
	cout << "You Have " << ohlone[user].checking << " In Your Checking Account."<<endl;
	cout << "How Much Would You Like To Withdraw Into Your Checking Account?"<<endl;
	cin >> amount;
	while(amount > ohlone[user].checking)
	{
		cout << "You Only Have " << ohlone[user].checking << " In Your Checking Account."<<endl;
		cout << "Enter A Number Lower Then The Amount In You Checking Account." << endl;
		cin >> amount;
	}
	ohlone[user].checking -= amount;
}

void ohlone_savings_withdraw(int user)
{
	float amount;
	cout << "You Have " << ohlone[user].savings << " In Your Savings Account."<<endl;
	cout << "How Much Would You Like To Withdraw Into Your Savings Account?"<<endl;
	cin >> amount;
	while(amount > ohlone[user].savings)
	{
		cout << "You Only Have " << ohlone[user].savings << " In Your Savings Account."<<endl;
		cout << "Enter A Number Lower Then The Amount In You Savings Account." << endl;
		cin >> amount;
	}
	ohlone[user].savings -= amount;
}

void ohlone_savings_deposit(int user)
{
	float amount;
	cout << "You Have " << ohlone[user].savings << " In Your Savings Account."<<endl;
	cout << "How Much Would You Like To Deposit Into Your Savings Account?"<<endl;
	cin >> amount;
	ohlone[user].savings += amount;
}

void ohlone_deposit (int user)
{
	int input;
	float deposit; 

	cout << "Which account would you like to deposit to?\n";
	cout << "1. Checking Account\n";
	cout << "2. Saving Account\n";
	cin  >> input;
	while( input > 2 && input < 1)
	{
		cout << "1. Or 2." << endl;
		cin >> input;
	} 
	if (input == 1)
	{
		ohlone_checking_deposit(user);
	}
	if (input == 2)
	{
		ohlone_savings_deposit(user);
	}
}

void ohlone_transfer (int user)
{
	int input;
	float amount;

	cout << "Would you like to transfer..\n\n";
	cout << "1. From CHECKING to SAVING\n";
	cout << "\nOR\n\n";
	cout << "2. From SAVING to CHECKING\n";
	cin >> input;
	if (input == 1)
	{
		cout << "How Much Would You Like To Transfer To Your Savings?"<<endl;
		cin >> amount;
		while (amount > ohlone[user].checking)
		{
			cout << "You Don't Have That Much In Your Checking Account, Enter An Amount Again."<<endl;
			cin >> amount;
		}
		ohlone[user].checking -= amount;
		ohlone[user].savings += amount;
	}
	if (input == 2)
	{
		cout << "How Much Would You Like To Transfer To Your Checking?"<<endl;
		cin >> amount;
		while (amount > ohlone[user].savings)
		{
			cout << "You Don't Have That Much In Your Savings Account, Enter An Amount Again."<<endl;
			cin >> amount;
		}
		ohlone[user].checking += amount;
		ohlone[user].savings -= amount;
	}
}

void ohlone_withdraw (int user)
{
	int input;
	float withdraw;

	cout << "From which account would you like to withdraw?\n";
	cout << "1. Checking\n";
	cout << "2. Saving\n";
	cin >> input;
	if (input == 1)
	{
		ohlone_checking_withdraw(user);
	}
	if (input == 2)
	{
		ohlone_savings_withdraw(user);
	}
}