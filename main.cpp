// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cstring>
#include <iostream>
#include "account.h"
#include "savings.h"
#include "checking.h"
#include "creditcard.h"

using namespace std;

int main()
{   
	int input;
	string chargeIssuer;
	creditcard cc1("John Smith", 123213123, 100);
	savings s1("John Smith", 123213123, 100);
	checking c1("John Smith", 123213123, 100);
	
	do {
		cout << "Checking Balance: " << c1.GetBalance() << " Savings Balance: " << s1.GetBalance() 
			<<" Credit Card Balance: " << cc1.GetBalance() << endl;
		cout << "1. Savings Deposit" << endl;
		cout << "2. Savings withdrawal" << endl;
		cout << "3. Checking Deposit" << endl;
		cout << "4. Write A Check" << endl;
		cout << "5. Credit Card Payment" << endl;
		cout << "6. Make A Charge" << endl;
		cout << "7. Display Savings" << endl;
		cout << "8. Display Checking" << endl;
		cout << "9. Display Credit Card" << endl;
		cout << "0. Exit" << endl;
		input = -1;
		cin >> input;
	
		switch (input) {
		case 1: ; // prints "1"
			double cash;
			cin >> cash;
			s1.MakeDeposit(cash);
			break;       // and exits the switch
		case 2: 
			double withDraw;
			cin >> withDraw;
			s1.DoWithdraw(withDraw);
			break;
		case 3:
			double deposit;
			cin >> deposit;
			c1.MakeDeposit(deposit);
			break;
		case 4:
			int checkNum;
			cin >> checkNum;
			double amount;
			cin >> amount;
			c1.WriteCheck(checkNum,amount);
			break;
		case 5:	
			double depositCC;
			cin >> depositCC;
			cc1.MakePayment(depositCC);
			break;
		case 6:
			std::cin >> chargeIssuer;
			double amount3;
			cin >> amount3;
			cc1.DoCharge(chargeIssuer, amount3);
			break;
		case 7:
			s1.display();
			break;
		case 8:
			c1.Display();
			break;
		case 9:
			cc1.display();
			break;
		case 0:
			cout << "Exit: Success!";
			break;
		}
	} while (input != 0);
	cin.ignore(2);
	
		
	
}

