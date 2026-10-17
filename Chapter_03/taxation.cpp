#include <iostream>
using namespace std;

int main() {
    int status;              // 0 = Resident, 1 = Non-resident
    double income, tax = 0;  // income is annual taxable income

    // Prompt the user for residence status
    cout << "(0-Resident, 1-Non-resident)" << endl;
    cout << "Enter the residence status: ";
    cin >> status;

    // Prompt the user for taxable income
    cout << "Enter the taxable income: ";
    cin >> income;

    // Resident tax calculation
    if (status == 0) {
        if (income <= 2820000)              // 0 to 2,820,000 -> Nil
            tax = 0;
        else if (income <= 4020000)         // 2,820,000 to 4,020,000 -> 10%
            tax = (income - 2820000) * 0.10;
        else if (income <= 4920000)         // 4,020,000 to 4,920,000 -> 20% + 120,000
            tax = (income - 4020000) * 0.20 + 120000;
        else if (income <= 120000000)       // 4,920,000 to 120,000,000 -> 30% + 300,000
            tax = (income - 4920000) * 0.30 + 300000;
        else                                // Above 120,000,000 -> extra 10% over 120m
            tax = (income - 4920000) * 0.30 + 300000 + (income - 120000000) * 0.10;
    }
    // Non-resident tax calculation
    else if (status == 1) {
        if (income <= 2820000)              // Up to 2,820,000 -> 10%
            tax = income * 0.10;
        else if (income <= 4020000)         // 2,820,000 to 4,020,000 -> 10%
            tax = income * 0.10;
        else if (income <= 4920000)         // 4,020,000 to 4,920,000 -> 20% + 402,000
            tax = (income - 4020000) * 0.20 + 402000;
        else if (income <= 120000000)       // 4,920,000 to 120,000,000 -> 30% + 582,000
            tax = (income - 4920000) * 0.30 + 582000;
        else                                // Above 120,000,000 -> extra 10% over 120m
            tax = (income - 4920000) * 0.30 + 582000 + (income - 120000000) * 0.10;
    }
    else {
        cout << "Invalid residence status entered." << endl;
        return 0;
    }

    // Display the computed tax value
    cout << "Tax is " << static_cast<int>(tax) << "." << endl;

    return 0;
}
