#ifndef AIRGEAD_BANKING_INVESTMENT_H_
#define AIRGEAD_BANKING_INVESTMENT_H_

// Investment class declaration
class Investment {
public:
    // Constructor to initialize investment details
    Investment(double t_initialInvestment, double t_monthlyDeposit, double t_annualInterestRate, int t_numYears);

    // Displays report without additional monthly deposits
    void displayWithoutMonthlyDeposits();

    // Displays report with additional monthly deposits
    void displayWithMonthlyDeposits();

private:
    // Member variables
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_annualInterestRate;
    int m_numYears;
};

#endif // AIRGEAD_BANKING_INVESTMENT_H_
