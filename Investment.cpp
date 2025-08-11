#include <iostream>
#include <iomanip>
#include "Investment.h"

// Constructor definition with t_ parameter naming
Investment::Investment(double t_initialInvestment, double t_monthlyDeposit, double t_annualInterestRate, int t_numYears)
    : m_initialInvestment(t_initialInvestment), m_monthlyDeposit(t_monthlyDeposit),
      m_annualInterestRate(t_annualInterestRate), m_numYears(t_numYears) {}

// Display report without additional monthly deposits
void Investment::displayWithoutMonthlyDeposits() {
    double balance = m_initialInvestment;
    double interestEarned;

    std::cout << "\n   Balance and Interest Without Additional Monthly Deposits\n";
    std::cout << "=============================================================\n";
    std::cout << "Year\tYear End Balance\tEarned Interest\n";

    for (int year = 1; year <= m_numYears; ++year) {
        interestEarned = balance * (m_annualInterestRate / 100);
        balance += interestEarned;

        std::cout << year << "\t$" << std::fixed << std::setprecision(2)
                  << balance << "\t\t$" << interestEarned << "\n";
    }
}

// Display report with additional monthly deposits
void Investment::displayWithMonthlyDeposits() {
    double balance = m_initialInvestment;
    double yearlyInterest, monthlyInterest;

    std::cout << "\n   Balance and Interest With Additional Monthly Deposits\n";
    std::cout << "==========================================================\n";
    std::cout << "Year\tYear End Balance\tEarned Interest\n";

    for (int year = 1; year <= m_numYears; ++year) {
        yearlyInterest = 0.0;

        for (int month = 1; month <= 12; ++month) {
            balance += m_monthlyDeposit;
            monthlyInterest = balance * ((m_annualInterestRate / 100) / 12);
            yearlyInterest += monthlyInterest;
            balance += monthlyInterest;
        }

        std::cout << year << "\t$" << std::fixed << std::setprecision(2)
                  << balance << "\t\t$" << yearlyInterest << "\n";
    }
}
