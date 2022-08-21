#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class BankStatement {
public:
	double calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears);
	double balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears);
	void printDetails(int year, double yearEndBalance, double interestEarned);

private:
	double initialInvestment, interestRate, monthlyDeposit;
	int numberOfYears;
};