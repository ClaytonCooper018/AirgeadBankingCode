# AirgeadBankingCode
Project Summary
This C++ console application calculates and compares investment growth with and without monthly deposits. After asking for initial investment, monthly deposit, yearly interest rate, and years, the application delivers two reports:
Growth without monthly deposits.
Growth from monthly deposits.
Personal finance planning benefits from this tool's visualization of how regular contributions and compound interest effect investment value.

What I Did Particularly Well
I used an Investment class to encapsulate investment data and calculations in a simple object-oriented structure. Iomanip formats output tables for readability, and the program flow is intuitive. The modular design simplifies program maintenance and expansion.

Areas for Enhancement
I could program better by:
Adding input validation to elegantly handle negative or incorrect values.
Supporting CSV data export for analysis.
Users can choose quarterly or weekly compounding periods for flexibility.
The programme would become more robust, user-friendly, and adaptable to real-world financial conditions.

Challenges and How I Overcame Them
Calculating compound interest with monthly donations proved difficult. I didn't change the balance after each month's interest, hence my algorithm initially returned somewhat inaccurate results. I solved this by:
Stepping the calculation monthly.
Precalculating monthly interest by applying the deposit.
Compare logic to spreadsheet calculations.
I used C++ documentation for precision formatting and loop structures and sample test cases to check my output.

Transferable Skills
Project improved my talents in:
C++ class-based object-oriented programming.
Clean financial reporting with precision formatting.
Designing an iterative interest algorithm.
User interaction in console apps.
Modular functions for cleaner, maintainable code.

Maintainability, Readability, and Adaptability
The program codes well:
Variable names that make sense.
Split class definition and implementation into.h and.cpp files.
Uniform formatting and indentation for readability.
Easy updates with modular displayWithoutMonthlyDeposits and displayWithMonthlyDeposits methods.
