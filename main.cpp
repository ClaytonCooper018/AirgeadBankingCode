#include <iostream>
#include "Investment.h"

int main() {
    double initialInvestment, monthlyDeposit, annualInterestRate;
    int numYears;
    char repeat;

    do {
        std::cout << "==========================================\n";
        std::cout << "Welcome to Airgead Banking Investment Tool\n";
        std::cout << "==========================================\n";

        std::cout << "Enter Initial Investment Amount: ";
        std::cin >> initialInvestment;

        std::cout << "Enter Monthly Deposit: ";
        std::cin >> monthlyDeposit;

        std::cout << "Enter Annual Interest Rate (in %): ";
        std::cin >> annualInterestRate;

        std::cout << "Enter Number of Years: ";
        std::cin >> numYears;

        Investment investment(initialInvestment, monthlyDeposit, annualInterestRate, numYears);

        investment.displayWithoutMonthlyDeposits();
        investment.displayWithMonthlyDeposits();

        std::cout << "\nWould you like to run another report? (y/n): ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
