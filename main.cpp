#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#include "AirGead.h"

int main() {
	//variables to be fed to functions
	double userInitialInvest = 0.0;
	double userMonthlyDeposit = 0.0;
	double userAnnualInt = 0.0;
	int userYears = 0;

	BankStatement UserStatement; //current user's bank statement

	//take all relevant data from user
	cout << "Please input our client's data below:" << endl;
	cout << "Initial investment amount: $";
	cin >> userInitialInvest;

	cout << "Monthly Deposit: $";
	cin >> userMonthlyDeposit;

	cout << "Annual Interest Rate: %";
	cin >> userAnnualInt;

	cout << "Number Of Years:  ";
	cin >> userYears;

	system("pause");

	//consider waiting for user input before proceeding via "PAUSE"
	//format for menu before printing necessary information

	//consider having this menu constricted to a function to avoid redundant code
	cout << "\n Balance and Interest Without Additional Monthly Deposit \n";
	cout << setw(60) << setfill('=') << "=\n";
	cout << " Year    Year End Balance          Year End Earned Interest \n";
	cout << setw(60) << setfill('-') << "-\n";

	UserStatement.calculateBalanceWithoutMonthlyDeposit(userInitialInvest, userAnnualInt, userYears);

	cout << "\n Balance and Interest With Additional Monthly Deposit \n";
	cout << setw(60) << setfill('=') << "=\n";
	cout << " Year    Year End Balance          Year End Earned Interest \n";
	cout << setw(60) << setfill('-') << "-\n";

	UserStatement.balanceWithMonthlyDeposit(userInitialInvest, userMonthlyDeposit, userAnnualInt, userYears);

	return 0;


}