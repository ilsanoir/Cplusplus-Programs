#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#include "AirGead.h"

void BankStatement::printDetails(int year, double yearEndBalance, double interestEarned){
	cout << year << "\t\t";
	cout << fixed << setprecision(2) << yearEndBalance << "\t\t\t" << interestEarned << endl;

	return;
}

//calculations may be inaccurate, but are functional
//review and repair formulas
double BankStatement::balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears){
	double finalBalance = initialInvestment;
	double interestEarned = 0.0;
	double interestTotal = 0.0;
	int i;
	int j;

	for (i = 1; i <= numberOfYears; i++) {
		//Set yearly interest to zero in the begining
		interestTotal = 0;
		for (j = 0; j < 12; j++) {
			interestEarned = (finalBalance + monthlyDeposit) * ((interestRate / 100) / 12);//Calculate monthly interest
			interestTotal = interestTotal + interestEarned;//Calculate month total
			finalBalance = finalBalance + monthlyDeposit + interestEarned;//Calculate total
		}

		printDetails(i, finalBalance, interestTotal);
	}


	// return the final balance
	return finalBalance;
}

double BankStatement::calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears){
	double finalBalance = initialInvestment;
	double interestEarned = 0.0;
	int i;

	for (i = 1; i <= numberOfYears; i++) {

		interestEarned = (finalBalance) * (interestRate / 100);
		finalBalance += interestEarned;
		printDetails(i, finalBalance, interestEarned);

	}


	// return the final balance
	return finalBalance;
}