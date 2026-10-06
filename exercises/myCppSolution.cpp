#include <iostream>
#include <string>

using namespace std;

int main()
{
    int rate = 0;
    bool validInput = false;
    string name;
    string position;

    cout << "Enter name: ";
    cin >> name;
    cout << "<m> Manager <s> Supervisor <e> Employee\n"
         << "Position: ";
    cin >> position;
    
    if (position == "m") {
        validInput = true;
        rate = 500;
        cout << "Rate: " << rate << endl;
    }
    else if (position == "s") {
        validInput = true;
        rate = 400;
        cout << "Rate: " << rate << endl;
    }
    else if (position == "e") {
        validInput = true;
        rate = 300;
        cout << "Rate: " << rate << endl;
    }

    if (validInput)
    {
        // Declare and initialize variables within the scope
        int numberOfDaysWorked = 0;
        int gross = 0;
        int bonus = 0;
        int tax = 0;
        int taxRate = 0;
        int SSS = 0;
        int medicare = 100;
        int netIncome = 0;

        cout << "Number of days worked: ";
        cin >> numberOfDaysWorked;

        if (numberOfDaysWorked >= 0)
        {
            gross = numberOfDaysWorked * rate;

            cout << "Gross: " << gross << endl;

            // Decide which bonus to use based on gross
            if (gross >= 7000)
                bonus = 1000;
            else if (gross >= 4000)
                bonus = 750;
            else if (gross >= 3000)
                bonus = 500;
            else
                bonus = 0;

            cout << "\nBonus: " << bonus << endl;
            cout << "Deductions: " << endl;

            // Decide which tax rate to use based on gross
            if (gross >= 7000)
                taxRate = 15;
            else if (gross >= 5000)
                taxRate = 10;
            else
                taxRate = 5;
            
            tax = gross * taxRate / 100;
            SSS = gross * 10 / 100;

            int deduction = SSS + medicare + tax;
            cout << "\tTax: " << tax << endl;
            cout << "\tSSS: " << SSS << endl;
            cout << "\tMedicare: " << medicare << endl;
            cout << "Total Deduction: " << deduction << endl;

            netIncome = gross + bonus - deduction;
            cout << endl << "Net Income: " << netIncome << endl;
        }
        else {
            cout << "Invalid number of days." << endl;
            cout << "Try again." << endl;
        }
    }
    else
        cout << "Not a valid position. Please try again." << endl;

    return 0;
}